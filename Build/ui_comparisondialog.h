/********************************************************************************
** Form generated from reading UI file 'comparisondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISONDIALOG_H
#define UI_COMPARISONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ComparisonDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *originalLabel;
    QListView *originalListView;
    QListView *comparisonListView;
    QLabel *comparisonLabel;
    QPushButton *pushButton;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QString::fromUtf8("ComparisonDialog"));
        ComparisonDialog->resize(673, 466);
        gridLayout = new QGridLayout(ComparisonDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        originalLabel = new QLabel(ComparisonDialog);
        originalLabel->setObjectName(QString::fromUtf8("originalLabel"));

        gridLayout->addWidget(originalLabel, 1, 1, 1, 1);

        originalListView = new QListView(ComparisonDialog);
        originalListView->setObjectName(QString::fromUtf8("originalListView"));

        gridLayout->addWidget(originalListView, 2, 1, 1, 1);

        comparisonListView = new QListView(ComparisonDialog);
        comparisonListView->setObjectName(QString::fromUtf8("comparisonListView"));

        gridLayout->addWidget(comparisonListView, 2, 2, 1, 1);

        comparisonLabel = new QLabel(ComparisonDialog);
        comparisonLabel->setObjectName(QString::fromUtf8("comparisonLabel"));

        gridLayout->addWidget(comparisonLabel, 1, 2, 1, 1);

        pushButton = new QPushButton(ComparisonDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 3);


        retranslateUi(ComparisonDialog);

        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QCoreApplication::translate("ComparisonDialog", "Dialog", nullptr));
        originalLabel->setText(QCoreApplication::translate("ComparisonDialog", "Country", nullptr));
        comparisonLabel->setText(QCoreApplication::translate("ComparisonDialog", "Country to compare", nullptr));
        pushButton->setText(QCoreApplication::translate("ComparisonDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComparisonDialog: public Ui_ComparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDIALOG_H
