#include "registerview.h"
#include "ui_registerview.h"

RegisterView::RegisterView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterView)
{
    ui->setupUi(this);

    ui->btnRegister->setCursor(Qt::PointingHandCursor);
    ui->btnReturn->setCursor(Qt::PointingHandCursor);
}

RegisterView::~RegisterView()
{
    delete ui;
}

void RegisterView::on_btnReturn_clicked()
{
    emit goLoginView();
}

