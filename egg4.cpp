#include "egg4.h"
#include "ui_egg4.h"
#include "egg5.h"
#include <QPixmap>


egg4::egg4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::egg4)
{
    ui->setupUi(this);
    QPixmap pictures;
    pictures.load(":/new/prefix1/chris.jpg");
    ui->label_pic1->setPixmap(pictures);
}

egg4::~egg4()
{
    delete ui;
}

void egg4::on_pushButton_clicked()
{
   egg5 *last_egg = new egg5;
   last_egg->exec();

}
