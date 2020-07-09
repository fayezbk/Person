#include "egg3.h"
#include "ui_egg3.h"
#include <QPixmap>
#include "egg4.h"
#include <QMessageBox>


egg3::egg3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::egg3)
{
    ui->setupUi(this);
    QPixmap pictures;
    pictures.load(":/new/prefix1/chris.jpg");
    ui->label_pic1->setPixmap(pictures);
}

egg3::~egg3()
{
    delete ui;
}

void egg3::on_pushButton_clicked()
{
    egg4 *new_egg = new egg4;
    new_egg->exec();
}
