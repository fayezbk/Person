#ifndef EGG1_H
#define EGG1_H

#include <QDialog>

namespace Ui {
class egg1;
}

class egg1 : public QDialog
{
    Q_OBJECT

public:
    explicit egg1(QWidget *parent = nullptr);
    ~egg1();

    void see_pic1();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::egg1 *ui;
};

#endif // EGG1_H
