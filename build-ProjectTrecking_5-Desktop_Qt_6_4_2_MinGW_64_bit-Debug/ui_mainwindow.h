/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_BSG;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonProduction;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOffice;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(641, 580);
        MainWindow->setMinimumSize(QSize(641, 580));
        MainWindow->setMaximumSize(QSize(641, 580));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_BSG = new QLabel(centralwidget);
        label_BSG->setObjectName("label_BSG");
        label_BSG->setGeometry(QRect(10, 10, 620, 343));
        label_BSG->setMaximumSize(QSize(620, 343));
        label_BSG->setPixmap(QPixmap(QString::fromUtf8(":/Logo/Pictures/BSG.png")));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 370, 621, 152));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonProduction = new QPushButton(layoutWidget);
        pushButtonProduction->setObjectName("pushButtonProduction");
        pushButtonProduction->setMinimumSize(QSize(200, 150));
        pushButtonProduction->setMaximumSize(QSize(200, 150));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        pushButtonProduction->setFont(font);

        horizontalLayout->addWidget(pushButtonProduction);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOffice = new QPushButton(layoutWidget);
        pushButtonOffice->setObjectName("pushButtonOffice");
        pushButtonOffice->setMinimumSize(QSize(200, 150));
        pushButtonOffice->setMaximumSize(QSize(200, 150));
        pushButtonOffice->setFont(font);

        horizontalLayout->addWidget(pushButtonOffice);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 641, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_BSG->setText(QString());
        pushButtonProduction->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\276", nullptr));
        pushButtonOffice->setText(QCoreApplication::translate("MainWindow", "\320\236\321\204\320\270\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
