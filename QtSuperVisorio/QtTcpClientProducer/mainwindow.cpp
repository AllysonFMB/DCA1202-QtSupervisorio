#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  Connecttcp();

  //inciando o Timer
  temporizador = startTimer(tempo);
  flagTemporizador = true;

  limiteMinimo = 0;
  limiteMaximo = 0;

  connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));

  connect(ui->pushButton_Conectar,
          SIGNAL(clicked(bool)),
          this,                     //dado que o método está no escopo da MainWindow, essa linha está certa,né?
          SLOT(Connecttcp()));

  connect(ui->pushButton_Desconectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Disconnecttcp()));

  connect(ui->horizontalSlider_Maximo,
          SIGNAL(valueChanged(int)),
          ui->lcdNumber_Maximo,
          SLOT(display(int)));

  connect(ui->horizontalSlider_Maximo,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setMaximo()));

  connect(ui->horizontalSlider_Minimo,
          SIGNAL(valueChanged(int)),
          ui->lcdNumber_Minimo,
          SLOT(display(int)));

  connect(ui->horizontalSlider_Minimo,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setMinimo()));

  connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setTiming()));

  connect(ui->pushButton_StartTransmissao,
          SIGNAL(clicked(bool)),
          this,
          SLOT(TempON()));

  connect(ui->pushButton_StopTransmissao,
          SIGNAL(clicked(bool)),
          this,
          SLOT(TempOFF()));

}

void MainWindow::Connecttcp(){

  qDebug() << "Connected";

  socket->connectToHost(ui->lineEdit->text(),1234);
  if(socket->waitForConnected(2000)){
    qDebug() << "Connected";
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

void MainWindow::TempOFF()
{
    if (flagTemporizador == true) {
        killTimer(temporizador);
        flagTemporizador = false;
    }
}

void MainWindow::TempON()
{
    if(flagTemporizador == false) {
        temporizador = startTimer(tempo);
        flagTemporizador = true;
    }
}

void MainWindow::setMaximo(){
    limiteMaximo = ui->horizontalSlider_Maximo->value();
    qDebug() << limiteMaximo;
}

void MainWindow::setMinimo(){
    limiteMinimo = ui->horizontalSlider_Minimo->value();
    qDebug() << limiteMinimo;
}

void MainWindow::putData(){
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    if(socket->state() == QAbstractSocket::ConnectedState){

      msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
      str = "set "+ QString::number(msecdate) + " " + dado +"\r\n";
      ui->textBrowser_Dados->append(str);

        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
          qDebug() << "wrote";
        }
    }
  }
MainWindow::~MainWindow(){
  delete socket;
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    dado = QString::number((qrand()%(limiteMaximo - limiteMinimo + 1)) + limiteMinimo);
    putData();
    qDebug() << dado ;
}



