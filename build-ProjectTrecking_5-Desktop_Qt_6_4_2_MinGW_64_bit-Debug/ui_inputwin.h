/********************************************************************************
** Form generated from reading UI file 'inputwin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIN_H
#define UI_INPUTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inputWin
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_NumZakaz;
    QLabel *label_2;
    QLineEdit *lineEdit_NameZakaz;

    void setupUi(QDialog *inputWin)
    {
        if (inputWin->objectName().isEmpty())
            inputWin->setObjectName("inputWin");
        inputWin->resize(320, 240);
        buttonBox = new QDialogButtonBox(inputWin);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 200, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(inputWin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 230, 52));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_NumZakaz = new QLineEdit(widget);
        lineEdit_NumZakaz->setObjectName("lineEdit_NumZakaz");

        gridLayout->addWidget(lineEdit_NumZakaz, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_NameZakaz = new QLineEdit(widget);
        lineEdit_NameZakaz->setObjectName("lineEdit_NameZakaz");

        gridLayout->addWidget(lineEdit_NameZakaz, 1, 1, 1, 1);


        retranslateUi(inputWin);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, inputWin, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, inputWin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(inputWin);
    } // setupUi

    void retranslateUi(QDialog *inputWin)
    {
        inputWin->setWindowTitle(QCoreApplication::translate("inputWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("inputWin", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("inputWin", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inputWin: public Ui_inputWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIN_H
