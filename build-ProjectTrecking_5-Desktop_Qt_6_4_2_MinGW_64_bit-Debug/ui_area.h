/********************************************************************************
** Form generated from reading UI file 'area.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREA_H
#define UI_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_area
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_add_text;
    QLineEdit *artCode;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_Sector;
    QComboBox *comboBox_Sector;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Number;
    QComboBox *comboBox_Number;
    QTableView *tableView;
    QSplitter *splitter;
    QPushButton *pushButton_Del;
    QPushButton *pushButton_mWindows;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *area)
    {
        if (area->objectName().isEmpty())
            area->setObjectName("area");
        area->resize(659, 644);
        centralwidget = new QWidget(area);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(21, 479, 601, 51));
        groupBox->setMinimumSize(QSize(601, 51));
        groupBox->setMaximumSize(QSize(601, 51));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 11, 606, 33));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_add_text = new QLabel(layoutWidget);
        label_add_text->setObjectName("label_add_text");
        label_add_text->setMinimumSize(QSize(161, 31));
        label_add_text->setMaximumSize(QSize(161, 31));

        gridLayout->addWidget(label_add_text, 0, 0, 1, 1);

        artCode = new QLineEdit(layoutWidget);
        artCode->setObjectName("artCode");
        artCode->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(artCode, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(21, 31, 601, 451));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Sector = new QLabel(layoutWidget1);
        label_Sector->setObjectName("label_Sector");

        verticalLayout->addWidget(label_Sector);

        comboBox_Sector = new QComboBox(layoutWidget1);
        comboBox_Sector->setObjectName("comboBox_Sector");

        verticalLayout->addWidget(comboBox_Sector);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_Number = new QLabel(layoutWidget1);
        label_Number->setObjectName("label_Number");

        verticalLayout_2->addWidget(label_Number);

        comboBox_Number = new QComboBox(layoutWidget1);
        comboBox_Number->setObjectName("comboBox_Number");

        verticalLayout_2->addWidget(comboBox_Number);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName("tableView");

        verticalLayout_3->addWidget(tableView);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(20, 550, 601, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Del = new QPushButton(splitter);
        pushButton_Del->setObjectName("pushButton_Del");
        splitter->addWidget(pushButton_Del);
        pushButton_mWindows = new QPushButton(splitter);
        pushButton_mWindows->setObjectName("pushButton_mWindows");
        splitter->addWidget(pushButton_mWindows);
        area->setCentralWidget(centralwidget);
        menubar = new QMenuBar(area);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 659, 22));
        area->setMenuBar(menubar);
        statusbar = new QStatusBar(area);
        statusbar->setObjectName("statusbar");
        area->setStatusBar(statusbar);

        retranslateUi(area);

        QMetaObject::connectSlotsByName(area);
    } // setupUi

    void retranslateUi(QMainWindow *area)
    {
        area->setWindowTitle(QCoreApplication::translate("area", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_add_text->setText(QCoreApplication::translate("area", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\320\265</span></p></body></html>", nullptr));
        label_Sector->setText(QCoreApplication::translate("area", " \320\243\321\207\320\260\321\201\321\202\320\276\320\272", nullptr));
        label_Number->setText(QCoreApplication::translate("area", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        pushButton_Del->setText(QCoreApplication::translate("area", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_mWindows->setText(QCoreApplication::translate("area", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class area: public Ui_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREA_H
