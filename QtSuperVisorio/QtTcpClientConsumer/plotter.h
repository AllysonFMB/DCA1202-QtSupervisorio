#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);

signals:

private:
  /**
    * @brief pontos recebe a lista de dados usada no QListWidget.
    */
   QList<int> pontos;

public slots:
   /**
   * @brief newPontos é o método responsável por atualizar a lista de pontos definida na variável pontos.
   */
   void newPontos(QList<int> novosP);
   /**
   * @brief pMax retorna o índice do maior número na lista de pontos.
   */
  int pMax();
  /**
  * @brief pMin retorna o índice do menor número na lista de pontos.
  */
  int pMin();
};

#endif // PLOTTER_H
