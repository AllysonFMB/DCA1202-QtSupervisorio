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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonGet;
    Plotter *widget;
    QSlider *horizontalSlider_Timing;
    QPushButton *pushButton_Update;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_Conectar;
    QPushButton *pushButton_Desconectar;
    QLabel *label_2;
    QPushButton *pushButton_StartTransmissao;
    QPushButton *pushButton_StopTransmissao;
    QLabel *label_ShowTiming;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(537, 372);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonGet = new QPushButton(centralWidget);
        pushButtonGet->setObjectName(QStringLiteral("pushButtonGet"));
        pushButtonGet->setGeometry(QRect(20, 180, 81, 21));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 10, 291, 291));
        widget->setAutoFillBackground(false);
        horizontalSlider_Timing = new QSlider(centralWidget);
        horizontalSlider_Timing->setObjectName(QStringLiteral("horizontalSlider_Timing"));
        horizontalSlider_Timing->setGeometry(QRect(20, 240, 131, 22));
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);
        pushButton_Update = new QPushButton(centralWidget);
        pushButton_Update->setObjectName(QStringLiteral("pushButton_Update"));
        pushButton_Update->setGeometry(QRect(110, 180, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 161, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 71, 16));
        pushButton_Conectar = new QPushButton(centralWidget);
        pushButton_Conectar->setObjectName(QStringLiteral("pushButton_Conectar"));
        pushButton_Conectar->setGeometry(QRect(20, 60, 75, 23));
        pushButton_Desconectar = new QPushButton(centralWidget);
        pushButton_Desconectar->setObjectName(QStringLiteral("pushButton_Desconectar"));
        pushButton_Desconectar->setGeometry(QRect(110, 60, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 210, 47, 13));
        pushButton_StartTransmissao = new QPushButton(centralWidget);
        pushButton_StartTransmissao->setObjectName(QStringLiteral("pushButton_StartTransmissao"));
        pushButton_StartTransmissao->setGeometry(QRect(20, 270, 75, 23));
        pushButton_StopTransmissao = new QPushButton(centralWidget);
        pushButton_StopTransmissao->setObjectName(QStringLiteral("pushButton_StopTransmissao"));
        pushButton_StopTransmissao->setGeometry(QRect(110, 270, 75, 23));
        label_ShowTiming = new QLabel(centralWidget);
        label_ShowTiming->setObjectName(QStringLiteral("label_ShowTiming"));
        label_ShowTiming->setGeometry(QRect(170, 230, 16, 31));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 90, 161, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 537, 21));
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
        pushButtonGet->setText(QApplication::translate("MainWindow", "getData", nullptr));
        pushButton_Update->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label->setText(QApplication::translate("MainWindow", "IP do Servidor", nullptr));
        pushButton_Conectar->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Desconectar->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Timing", nullptr));
        pushButton_StartTransmissao->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_StopTransmissao->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label_ShowTiming->setText(QApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
