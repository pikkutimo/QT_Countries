#ifndef COMPARISONDIALOG_H
#define COMPARISONDIALOG_H

#include <QDialog>
#include <QStringListModel>

namespace Ui {
class ComparisonDialog;
}

class ComparisonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ComparisonDialog(QWidget *parent = nullptr);
    ~ComparisonDialog();
    QStringList* originalList;
    QStringListModel* originalModel;
    QStringList* comparisonList;
    QStringListModel* comparisonModel;

private slots:
    void on_pushButton_clicked();
    void reveiveVector(std::vector<QString> &, std::vector<QString> &);

private:
    Ui::ComparisonDialog *ui;
    std::vector<QString> *originalCountry;
    std::vector<QString> *comparisonCountry;
};

#endif // COMPARISONDIALOG_H
