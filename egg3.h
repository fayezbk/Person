#ifndef EGG3_H
#define EGG3_H

#include <QDialog>

namespace Ui {
class egg3;
}

class egg3 : public QDialog
{
    Q_OBJECT

public:
    explicit egg3(QWidget *parent = nullptr);
    ~egg3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::egg3 *ui;
};

#endif // EGG3_H
