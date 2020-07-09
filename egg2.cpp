#include "egg2.h"
#include "ui_egg2.h"
#include "egg1.h"
#include "egg3.h"
#include <QPixmap>

egg2::egg2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::egg2)
{
    ui->setupUi(this);

    QPixmap pictures;
    pictures.load(":/new/prefix1/chris.jpg");
    ui->label->setPixmap(pictures);
}

egg2::~egg2()
{
    delete ui;
}

void egg2::on_pushButton_clicked()
{
    egg3 *new_egg = new egg3;
    new_egg->exec();
}
