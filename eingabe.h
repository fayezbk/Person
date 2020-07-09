#ifndef EINGABE_H
#define EINGABE_H

#include <QDialog>

namespace Ui {
class Eingabe;
}

class Eingabe : public QDialog
{
    Q_OBJECT

public:
    explicit Eingabe(QWidget *parent = nullptr);
    ~Eingabe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Eingabe *ui;

};

#endif // EINGABE_H
