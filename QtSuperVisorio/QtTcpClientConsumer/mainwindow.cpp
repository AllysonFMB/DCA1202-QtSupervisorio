#include <QDateTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
//  ui = new Ui::MainWindow;
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  Connecttcp();

  //inciando o Timer
 // temporizador = startTimer(tempo);
  //flagTemporizador = true;

  connect(ui->pushButton_Conectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Connecttcp()));

  connect(ui->pushButton_Desconectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Disconnecttcp()));

  connect(ui->pushButton_StartTransmissao,
          SIGNAL(clicked(bool)),
          this,
          SLOT(TempON()));

  connect(ui->pushButton_StopTransmissao,
          SIGNAL(clicked(bool)),
          this,
          SLOT(TempOFF()));

  connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setTiming()));

  //falta conectar o ListWidget
  connect(ui->pushButton_Update,
          SIGNAL(clicked(bool)),
          this,
          SLOT(IPList()));

  connect(ui->listWidget,
          SIGNAL(itemSelectionChanged()),
          this,
          SLOT(Uptade()));

}

void MainWindow::Connecttcp(){

  qDebug() << "Connected";

  socket->connectToHost(ui->lineEdit->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }

}


void MainWindow::Disconnecttcp(){

    socket->disconnectFromHost();
        qDebug() << "Disconnected";
}


void MainWindow::setTiming(){

    tempo = ui->horizontalSlider_Timing->value()*1000;

    if (flagTemporizador) {
        killTimer(temporizador);
        temporizador = startTimer(tempo);
    }

    QString valor = QString::number(ui->horizontalSlider_Timing->value());
    ui->label_ShowTiming->setText(valor);

}
void MainWindow::TempON()
{
    if(flagTemporizador == false) {
        temporizador = startTimer(tempo);
        flagTemporizador = true;
    }
    qDebug() << "TempON";
}

void MainWindow::TempOFF()
{
    if (flagTemporizador == true) {
        killTimer(temporizador);
        flagTemporizador = false;
    }
    qDebug() << "TempOFF";
}

void MainWindow::Uptade()
{
    QListWidgetItem* point_atual = ui->listWidget->currentItem();
    atual_Ip = *point_atual;
    qDebug() << "clicou em: "<< atual_Ip.text();
}

void MainWindow::IPList()
{
    QString str;
    QStringList list;
    qDebug() << "to get data...";
    if(socket->state() == QAbstractSocket::ConnectedState){
      if(socket->isOpen()){
        qDebug() << "reading...";
        socket->write("list");
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        qDebug() << socket->bytesAvailable();
        ui->listWidget->clear();
        while(socket->bytesAvailable()){
          str = socket->readLine().replace("\n","").replace("\r","");
          ui->listWidget->addItem(str);
          qDebug() <<"Ips recebidos: "<< str;
        }
      }
    }
}



void MainWindow::getData(){
    QString str;
    QByteArray array;
    QStringList list;
    qint64 thetime;

    qDebug() << "to get data...";

    dados.erase(dados.begin(),dados.end());

    if(socket->state() == QAbstractSocket::ConnectedState){
      if(socket->isOpen()){
        QString comando = "get " + atual_Ip.text() + " 10\r\n"  ;
        qDebug() << "reading..."; //toStdString().c_str()
        socket->write(comando.toStdString().c_str());
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        qDebug() << socket->bytesAvailable();
        while(socket->bytesAvailable()){
          str = socket->readLine().replace("\n","").replace("\r","");
          list = str.split(" ");

          if(list.size() == 2){
            bool ok;
            str = list.at(0);
            thetime = str.toLongLong(&ok);
            str = list.at(1);
            dados.append(str.toInt(&ok));
          }
        }
        qDebug() << "list = "<< dados;
        ui->widget->newPontos(dados);
      }
    }
  }
void MainWindow::timerEvent(QTimerEvent *event)
{
    getData();
    //qDebug() << dado;             aqui queremos printar os dados recebidos.
}

MainWindow::~MainWindow()
{
  delete socket;
    delete ui;
}

