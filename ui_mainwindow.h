/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutHabitacion;
    QWidget *gridLayoutWidget_2;
    QGridLayout *buttonsLayout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *dniSearch;
    QGridLayout *gridLayoutBuscar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nFilas;
    QLabel *label_2;
    QLineEdit *nCol;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1035, 626);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(49, 89, 871, 451));
        gridLayoutHabitacion = new QGridLayout(gridLayoutWidget);
        gridLayoutHabitacion->setObjectName("gridLayoutHabitacion");
        gridLayoutHabitacion->setVerticalSpacing(6);
        gridLayoutHabitacion->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(50, 560, 641, 51));
        buttonsLayout = new QGridLayout(gridLayoutWidget_2);
        buttonsLayout->setObjectName("buttonsLayout");
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(570, 30, 286, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        dniSearch = new QLineEdit(layoutWidget);
        dniSearch->setObjectName("dniSearch");

        horizontalLayout->addWidget(dniSearch);

        gridLayoutBuscar = new QGridLayout();
        gridLayoutBuscar->setObjectName("gridLayoutBuscar");

        horizontalLayout->addLayout(gridLayoutBuscar);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 30, 428, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        nFilas = new QLineEdit(layoutWidget1);
        nFilas->setObjectName("nFilas");
        nFilas->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_2->addWidget(nFilas);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nCol = new QLineEdit(layoutWidget1);
        nCol->setObjectName("nCol");

        horizontalLayout_2->addWidget(nCol);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Buscar por DNI:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "filas:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "columnas:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "generar habitacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
