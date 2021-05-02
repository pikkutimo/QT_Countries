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
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_selectionDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QSlider *limitSlider;
    QLabel *chooseActionLabel;
    QLabel *selectedCountryLabel;
    QLabel *label;
    QLabel *maxPopulationLabel;
    QLineEdit *selectedCountryLineEdit;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *selectionDialog)
    {
        if (selectionDialog->objectName().isEmpty())
            selectionDialog->setObjectName(QString::fromUtf8("selectionDialog"));
        selectionDialog->resize(408, 178);
        gridLayout = new QGridLayout(selectionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(selectionDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 4, 0, 1, 1);

        limitSlider = new QSlider(selectionDialog);
        limitSlider->setObjectName(QString::fromUtf8("limitSlider"));
        limitSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(limitSlider, 1, 1, 1, 1);

        chooseActionLabel = new QLabel(selectionDialog);
        chooseActionLabel->setObjectName(QString::fromUtf8("chooseActionLabel"));

        gridLayout->addWidget(chooseActionLabel, 2, 0, 1, 1);

        selectedCountryLabel = new QLabel(selectionDialog);
        selectedCountryLabel->setObjectName(QString::fromUtf8("selectedCountryLabel"));

        gridLayout->addWidget(selectedCountryLabel, 0, 0, 1, 1);

        label = new QLabel(selectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        maxPopulationLabel = new QLabel(selectionDialog);
        maxPopulationLabel->setObjectName(QString::fromUtf8("maxPopulationLabel"));
        maxPopulationLabel->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(maxPopulationLabel, 1, 2, 1, 1);

        selectedCountryLineEdit = new QLineEdit(selectionDialog);
        selectedCountryLineEdit->setObjectName(QString::fromUtf8("selectedCountryLineEdit"));

        gridLayout->addWidget(selectedCountryLineEdit, 0, 1, 1, 2);

        comboBox = new QComboBox(selectionDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 2);

        buttonBox = new QDialogButtonBox(selectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 3);


        retranslateUi(selectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), selectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), selectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(selectionDialog);
    } // setupUi

    void retranslateUi(QDialog *selectionDialog)
    {
        selectionDialog->setWindowTitle(QCoreApplication::translate("selectionDialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("selectionDialog", "Choose Random", nullptr));
        chooseActionLabel->setText(QCoreApplication::translate("selectionDialog", "Compare to", nullptr));
        selectedCountryLabel->setText(QCoreApplication::translate("selectionDialog", "Selected country", nullptr));
        label->setText(QCoreApplication::translate("selectionDialog", "Max population", nullptr));
        maxPopulationLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selectionDialog: public Ui_selectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONDIALOG_H
