/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonPut;
    QPushButton *pushButton_StartTransmissao;
    QPushButton *pushButton_StopTransmissao;
    QLCDNumber *lcdNumber_Maximo;
    QSlider *horizontalSlider_Maximo;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider_Minimo;
    QLCDNumber *lcdNumber_Minimo;
    QTextBrowser *textBrowser_Dados;
    QLabel *label_3;
    QSlider *horizontalSlider_Timing;
    QLabel *label_ShowTiming;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Conectar;
    QPushButton *pushButton_Desconectar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(613, 369);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonPut = new QPushButton(centralWidget);
        pushButtonPut->setObjectName(QStringLiteral("pushButtonPut"));
        pushButtonPut->setGeometry(QRect(210, 280, 101, 29));
        pushButton_StartTransmissao = new QPushButton(centralWidget);
        pushButton_StartTransmissao->setObjectName(QStringLiteral("pushButton_StartTransmissao"));
        pushButton_StartTransmissao->setGeometry(QRect(0, 280, 101, 31));
        pushButton_StopTransmissao = new QPushButton(centralWidget);
        pushButton_StopTransmissao->setObjectName(QStringLiteral("pushButton_StopTransmissao"));
        pushButton_StopTransmissao->setGeometry(QRect(110, 280, 91, 31));
        lcdNumber_Maximo = new QLCDNumber(centralWidget);
        lcdNumber_Maximo->setObjectName(QStringLiteral("lcdNumber_Maximo"));
        lcdNumber_Maximo->setGeometry(QRect(240, 90, 81, 41));
        horizontalSlider_Maximo = new QSlider(centralWidget);
        horizontalSlider_Maximo->setObjectName(QStringLiteral("horizontalSlider_Maximo"));
        horizontalSlider_Maximo->setGeometry(QRect(20, 100, 191, 22));
        horizontalSlider_Maximo->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(247, 60, 31, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(247, 140, 31, 21));
        horizontalSlider_Minimo = new QSlider(centralWidget);
        horizontalSlider_Minimo->setObjectName(QStringLiteral("horizontalSlider_Minimo"));
        horizontalSlider_Minimo->setGeometry(QRect(20, 180, 191, 22));
        horizontalSlider_Minimo->setOrientation(Qt::Horizontal);
        lcdNumber_Minimo = new QLCDNumber(centralWidget);
        lcdNumber_Minimo->setObjectName(QStringLiteral("lcdNumber_Minimo"));
        lcdNumber_Minimo->setGeometry(QRect(240, 170, 81, 41));
        textBrowser_Dados = new QTextBrowser(centralWidget);
        textBrowser_Dados->setObjectName(QStringLiteral("textBrowser_Dados"));
        textBrowser_Dados->setGeometry(QRect(340, 20, 256, 281));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 220, 71, 21));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        horizontalSlider_Timing = new QSlider(centralWidget);
        horizontalSlider_Timing->setObjectName(QStringLiteral("horizontalSlider_Timing"));
        horizontalSlider_Timing->setGeometry(QRect(10, 240, 201, 16));
        horizontalSlider_Timing->setMinimum(1);
        horizontalSlider_Timing->setMaximum(100);
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);
        label_ShowTiming = new QLabel(centralWidget);
        label_ShowTiming->setObjectName(QStringLiteral("label_ShowTiming"));
        label_ShowTiming->setGeometry(QRect(220, 230, 16, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 10, 191, 20));
        pushButton_Conectar = new QPushButton(centralWidget);
        pushButton_Conectar->setObjectName(QStringLiteral("pushButton_Conectar"));
        pushButton_Conectar->setGeometry(QRect(20, 40, 75, 23));
        pushButton_Desconectar = new QPushButton(centralWidget);
        pushButton_Desconectar->setObjectName(QStringLiteral("pushButton_Desconectar"));
        pushButton_Desconectar->setGeometry(QRect(130, 40, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 613, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonPut->setText(QApplication::translate("MainWindow", "putData", nullptr));
        pushButton_StartTransmissao->setText(QApplication::translate("MainWindow", "start", nullptr));
        pushButton_StopTransmissao->setText(QApplication::translate("MainWindow", "stop", nullptr));
        label->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "MIN", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timings(s)", nullptr));
        label_ShowTiming->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_Conectar->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Desconectar->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
