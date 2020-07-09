#ifndef EGG2_H
#define EGG2_H

#include <QDialog>

namespace Ui {
class egg2;
}

class egg2 : public QDialog
{
    Q_OBJECT

public:
    explicit egg2(QWidget *parent = nullptr);
    ~egg2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::egg2 *ui;
};

#endif // EGG2_H
