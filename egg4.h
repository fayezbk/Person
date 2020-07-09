#ifndef EGG4_H
#define EGG4_H

#include <QDialog>

namespace Ui {
class egg4;
}

class egg4 : public QDialog
{
    Q_OBJECT

public:
    explicit egg4(QWidget *parent = nullptr);
    ~egg4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::egg4 *ui;
};

#endif // EGG4_H
