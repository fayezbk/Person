#ifndef BEARBEITEN_H
#define BEARBEITEN_H

#include <QDialog>

namespace Ui {
class bearbeiten;
}

class bearbeiten : public QDialog
{
    Q_OBJECT

public:
    explicit bearbeiten(QWidget *parent = nullptr);
    ~bearbeiten();

private slots:
    void on_pushButton_anzeigen_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_Exit_clicked();

private:
    Ui::bearbeiten *ui;
};

#endif // BEARBEITEN_H
