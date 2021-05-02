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
    QLabel *comparisonLabel;
    QLabel *originalLabel;
    QPushButton *pushButton;
    QListView *itemsListView;
    QListView *originalListView;
    QListView *comparisonListView;
    QLabel *compareImageLabel;
    QLabel *originalImageLabel;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QString::fromUtf8("ComparisonDialog"));
        ComparisonDialog->resize(640, 562);
        ComparisonDialog->setMinimumSize(QSize(640, 530));
        gridLayout = new QGridLayout(ComparisonDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comparisonLabel = new QLabel(ComparisonDialog);
        comparisonLabel->setObjectName(QString::fromUtf8("comparisonLabel"));
        QFont font;
        font.setPointSize(16);
        comparisonLabel->setFont(font);
        comparisonLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(comparisonLabel, 1, 2, 1, 1);

        originalLabel = new QLabel(ComparisonDialog);
        originalLabel->setObjectName(QString::fromUtf8("originalLabel"));
        originalLabel->setFont(font);
        originalLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(originalLabel, 1, 1, 1, 1);

        pushButton = new QPushButton(ComparisonDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 3);

        itemsListView = new QListView(ComparisonDialog);
        itemsListView->setObjectName(QString::fromUtf8("itemsListView"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemsListView->sizePolicy().hasHeightForWidth());
        itemsListView->setSizePolicy(sizePolicy);
        itemsListView->setAutoFillBackground(false);
        itemsListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        itemsListView->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(itemsListView, 3, 0, 1, 1);

        originalListView = new QListView(ComparisonDialog);
        originalListView->setObjectName(QString::fromUtf8("originalListView"));
        sizePolicy.setHeightForWidth(originalListView->sizePolicy().hasHeightForWidth());
        originalListView->setSizePolicy(sizePolicy);
        originalListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        originalListView->setSelectionMode(QAbstractItemView::SingleSelection);
        originalListView->setSelectionBehavior(QAbstractItemView::SelectItems);

        gridLayout->addWidget(originalListView, 3, 1, 1, 1);

        comparisonListView = new QListView(ComparisonDialog);
        comparisonListView->setObjectName(QString::fromUtf8("comparisonListView"));
        sizePolicy.setHeightForWidth(comparisonListView->sizePolicy().hasHeightForWidth());
        comparisonListView->setSizePolicy(sizePolicy);
        comparisonListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        comparisonListView->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(comparisonListView, 3, 2, 1, 1);

        compareImageLabel = new QLabel(ComparisonDialog);
        compareImageLabel->setObjectName(QString::fromUtf8("compareImageLabel"));

        gridLayout->addWidget(compareImageLabel, 2, 2, 1, 1);

        originalImageLabel = new QLabel(ComparisonDialog);
        originalImageLabel->setObjectName(QString::fromUtf8("originalImageLabel"));
        originalImageLabel->setMinimumSize(QSize(85, 65));

        gridLayout->addWidget(originalImageLabel, 2, 1, 1, 1);


        retranslateUi(ComparisonDialog);

        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QCoreApplication::translate("ComparisonDialog", "Dialog", nullptr));
        comparisonLabel->setText(QCoreApplication::translate("ComparisonDialog", "Country to compare", nullptr));
        originalLabel->setText(QCoreApplication::translate("ComparisonDialog", "Country", nullptr));
        pushButton->setText(QCoreApplication::translate("ComparisonDialog", "OK", nullptr));
        compareImageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ComparisonDialog: public Ui_ComparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDIALOG_H
