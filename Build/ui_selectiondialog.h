/********************************************************************************
** Form generated from reading UI file 'selectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONDIALOG_H
#define UI_SELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_selectionDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLineEdit *selectedCountryLineEdit;
    QLabel *selectedCountryLabel;
    QLabel *chooseActionLabel;
    QComboBox *comboBox;
    QCheckBox *checkBox;

    void setupUi(QDialog *selectionDialog)
    {
        if (selectionDialog->objectName().isEmpty())
            selectionDialog->setObjectName(QString::fromUtf8("selectionDialog"));
        selectionDialog->resize(408, 178);
        gridLayout = new QGridLayout(selectionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(selectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        selectedCountryLineEdit = new QLineEdit(selectionDialog);
        selectedCountryLineEdit->setObjectName(QString::fromUtf8("selectedCountryLineEdit"));

        gridLayout->addWidget(selectedCountryLineEdit, 0, 1, 1, 1);

        selectedCountryLabel = new QLabel(selectionDialog);
        selectedCountryLabel->setObjectName(QString::fromUtf8("selectedCountryLabel"));

        gridLayout->addWidget(selectedCountryLabel, 0, 0, 1, 1);

        chooseActionLabel = new QLabel(selectionDialog);
        chooseActionLabel->setObjectName(QString::fromUtf8("chooseActionLabel"));

        gridLayout->addWidget(chooseActionLabel, 1, 0, 1, 1);

        comboBox = new QComboBox(selectionDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        checkBox = new QCheckBox(selectionDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 3, 0, 1, 1);


        retranslateUi(selectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), selectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), selectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(selectionDialog);
    } // setupUi

    void retranslateUi(QDialog *selectionDialog)
    {
        selectionDialog->setWindowTitle(QCoreApplication::translate("selectionDialog", "Dialog", nullptr));
        selectedCountryLabel->setText(QCoreApplication::translate("selectionDialog", "Selected country", nullptr));
        chooseActionLabel->setText(QCoreApplication::translate("selectionDialog", "Compare to", nullptr));
        checkBox->setText(QCoreApplication::translate("selectionDialog", "Choose Random", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectionDialog: public Ui_selectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONDIALOG_H
