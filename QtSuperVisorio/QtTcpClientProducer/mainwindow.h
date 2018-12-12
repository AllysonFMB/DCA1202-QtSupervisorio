#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
#include <string>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public:
    void timerEvent(QTimerEvent *event);

public slots:
    /**
       * @brief putData Método responsável por fazer o envio dos dados aleatórios gerados pelo Cliente Produtor.
       */
  void putData();
  /**
    * @brief tcpConnect Método responsável por realizar a conexão entre o Cliente Produtor e o Cliente Servidor.
    */
  void Connecttcp();
  /**
    * @brief Connecttcp Método responsável por finalizar conexão entre o Cliente Produtor e o Cliente Servidor.
    */
  void Disconnecttcp();
  /**
    * @brief TempoON Método responsável por mostrar o valor do tempo do temporizador.
    */
  void setTiming();
  /**
    * @brief TempoON Método responsável por iniciar o temporizador.
    */
  void TempON();
  /**
    * @brief TempoOFF Método responsável por finilizar o temporizador.
    */
  void TempOFF();
  /**
    * @brief setMaximo Método responsável por mostrar o valor máximo dos dados a ser gerado.
    */
  void setMaximo();
  /**
    * @brief setMinimo Método responsável por mostrar o valor minimo dos dados a ser gerado.
    */
  void setMinimo();

private:
  /**
 * @brief tempo variável de tempo.
 */
  int tempo = 1000;
  /**
 * @brief temporizador variável do temporizador.
 */
  int temporizador;
  /**
 * @brief ui Ponteiro para acesso de componentes da classe MainWindow.
 */
  Ui::MainWindow *ui;
  /**
 * @brief socket Ponteiro para o endereço de IP.
 */
  QTcpSocket *socket;
  /**
 * @brief flagTemporizador variável bool da flag do temporizador.
 */
  bool flagTemporizador;
  /**
 * @brief limiteMinimo variável que seta o valor minimo.
 */
  int limiteMinimo;
  /**
 * @brief limiteMaximo variável que seta o valor maximo.
 */
  int limiteMaximo;

  QString dado;
};

#endif // MAINWINDOW_H
