#ifndef EGG5_H
#define EGG5_H

#include <QDialog>

namespace Ui {
class egg5;
}

class egg5 : public QDialog
{
    Q_OBJECT

public:
    explicit egg5(QWidget *parent = nullptr);
    ~egg5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::egg5 *ui;
};

#endif // EGG5_H
