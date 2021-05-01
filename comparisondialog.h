#ifndef COMPARISONDIALOG_H
#define COMPARISONDIALOG_H

#include <QDialog>
#include <QStringListModel>
#include <QLabel>
#include <QBitmap>
#include <QPixmap>

namespace Ui {
class ComparisonDialog;
}

class ComparisonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ComparisonDialog(std::vector<QString>, std::vector<QString>, QWidget *parent = nullptr);
    ~ComparisonDialog();
    QStringList* originalList;
    QStringListModel* originalModel;
    QStringList* comparisonList;
    QStringListModel* comparisonModel;
    QStringList* titlesList;
    QStringListModel* titlesModel;
    void fillTitles();
    void loadFlags();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ComparisonDialog *ui;
};

#endif // COMPARISONDIALOG_H
