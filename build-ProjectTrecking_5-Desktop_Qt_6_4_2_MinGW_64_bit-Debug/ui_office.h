/********************************************************************************
** Form generated from reading UI file 'office.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFICE_H
#define UI_OFFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Office
{
public:
    QWidget *centralwidget;
    QTableView *tableViewSort;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_NewOrder;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_KB;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_Order;
    QLabel *label_2;
    QComboBox *comboBox_Sort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Office)
    {
        if (Office->objectName().isEmpty())
            Office->setObjectName("Office");
        Office->resize(662, 556);
        centralwidget = new QWidget(Office);
        centralwidget->setObjectName("centralwidget");
        tableViewSort = new QTableView(centralwidget);
        tableViewSort->setObjectName("tableViewSort");
        tableViewSort->setGeometry(QRect(10, 110, 631, 391));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 11, 391, 91));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_NewOrder = new QPushButton(widget);
        pushButton_NewOrder->setObjectName("pushButton_NewOrder");
        pushButton_NewOrder->setMinimumSize(QSize(100, 25));

        gridLayout_2->addWidget(pushButton_NewOrder, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_KB = new QPushButton(widget);
        pushButton_KB->setObjectName("pushButton_KB");
        pushButton_KB->setMinimumSize(QSize(70, 70));
        pushButton_KB->setMaximumSize(QSize(70, 70));
        pushButton_KB->setCheckable(false);
        pushButton_KB->setAutoRepeat(false);
        pushButton_KB->setAutoExclusive(false);
        pushButton_KB->setAutoRepeatDelay(400);

        gridLayout_2->addWidget(pushButton_KB, 0, 2, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 25));
        label->setMaximumSize(QSize(100, 25));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_Order = new QComboBox(widget);
        comboBox_Order->setObjectName("comboBox_Order");
        comboBox_Order->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(comboBox_Order, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 25));
        label_2->setMaximumSize(QSize(100, 25));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setLineWidth(1);
        label_2->setMidLineWidth(0);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_Sort = new QComboBox(widget);
        comboBox_Sort->setObjectName("comboBox_Sort");

        gridLayout->addWidget(comboBox_Sort, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);

        Office->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Office);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 662, 22));
        Office->setMenuBar(menubar);
        statusbar = new QStatusBar(Office);
        statusbar->setObjectName("statusbar");
        Office->setStatusBar(statusbar);

        retranslateUi(Office);

        QMetaObject::connectSlotsByName(Office);
    } // setupUi

    void retranslateUi(QMainWindow *Office)
    {
        Office->setWindowTitle(QCoreApplication::translate("Office", "MainWindow", nullptr));
        pushButton_NewOrder->setText(QCoreApplication::translate("Office", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        pushButton_KB->setText(QCoreApplication::translate("Office", "\320\232\320\221", nullptr));
        label->setText(QCoreApplication::translate("Office", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("Office", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Office: public Ui_Office {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFICE_H
