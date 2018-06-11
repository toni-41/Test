#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);




    connect(ui->pb_Close, &QPushButton::clicked, this, &Calculator::close);
}

Calculator::~Calculator()
{
    delete ui;
}
