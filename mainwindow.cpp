#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton*)sender();
    QString value = button->text();

    if(ui->display->text() == "0"||ui->display->text()=="")
        ui->display->setText(value);
    else
        ui->display->setText(ui->display->text() + value);
}


void MainWindow::on_nine_clicked()
{
    digit_pressed();
}

void MainWindow::on_eight_clicked()
{
    digit_pressed();
}

void MainWindow::on_seven_clicked()
{
    digit_pressed();
}

void MainWindow::on_six_clicked()
{
    digit_pressed();
}

void MainWindow::on_five_clicked()
{
    digit_pressed();
}

void MainWindow::on_four_clicked()
{
    digit_pressed();
}

void MainWindow::on_three_clicked()
{
    digit_pressed();
}

void MainWindow::on_two_clicked()
{
    digit_pressed();
}

void MainWindow::on_one_clicked()
{
    digit_pressed();
}

void MainWindow::on_double0_clicked()
{
    digit_pressed();
}

void MainWindow::on_zero_clicked()
{
    digit_pressed();
}

void MainWindow::on_AC_clicked()
{
    ui->display->setText("0");
}

void MainWindow::on_add_clicked()
{
    first_no=ui->display->text().toDouble();
    op= '+';
    ui->display->clear();
}

void MainWindow::on_sub_clicked()
{
    first_no=ui->display->text().toDouble();
    op= '-';
    ui->display->clear();
}

void MainWindow::on_multiply_clicked()

{
    first_no=ui->display->text().toDouble();
    op= '*';
    ui->display->clear();
}

void MainWindow::on_divide_clicked()
{
    first_no=ui->display->text().toDouble();
    op='/';
    ui->display->clear();
}

void MainWindow::on_cos_clicked()
{
    first_no=ui->display->text().toDouble();
    op='c';
    ui->display->clear();
}

void MainWindow::on_power_clicked()
{
    first_no=ui->display->text().toDouble();
    op='^';
    ui->display->clear();
}

void MainWindow::on_sin_clicked()
{
    first_no=ui->display->text().toDouble();
    op='s';
    ui->display->clear();
}

void MainWindow::on_log_clicked()
{
    first_no=ui->display->text().toDouble();
    op='l';
    ui->display->clear();
}

void MainWindow::on_e_clicked()
{
    ui->display->setText(ui->display->text()+QString::number(exp(1)));
}

void MainWindow::on_ln_clicked()
{
   first_no=ui->display->text().toDouble();
   op='n';
   ui->display->clear();
}

void MainWindow::on_pi_clicked()
{
    ui->display->setText(ui->display->text()+QString::number(M_PI));
}

void MainWindow::on_decimal_clicked()
{
    first_no=ui->display->text().toDouble();
    op='.';
    ui->display->clear();
}

void MainWindow::on_percentage_clicked()
{
    first_no=ui->display->text().toDouble();
    op='%';
    ui->display->clear();
}

void MainWindow::on_leftbracket_clicked()
{
    first_no=ui->display->text().toDouble();
    op='(';
    ui->display->clear();
}

void MainWindow::on_rightbracket_clicked()
{
    first_no=ui->display->text().toDouble();
    op=')';
    ui->display->clear();
}

void MainWindow::on_enter_clicked()
{
    double second_no=ui->display->text().toDouble();
    double result=0;

    switch(op)
    {
    case '+' :
        result = first_no + second_no;
        break;
    case '-' :
        result = first_no - second_no;
        break;
    case '*' :
        result = first_no * second_no;
        break;
    case '/' :
        if((second_no==0)||(first_no==0 && second_no==0))
            {
            ui->display->setText("NOT DEFINED! TRY AGAIN");
            }
        else
        {result = first_no/second_no;}
         break;    
    case 's':
        ui->display->setText(QString::number(first_no));

        result = sin(first_no * M_PI/180);
        break;
    case 'c':
        result = cos(first_no * M_PI/180);
        break;
    case '^':
        result = pow(first_no,second_no);
        break;
    case 'l':
        if(first_no>0)
        { result = log10(first_no);}
        else
        {ui->display->setText("NOT DEFINED! TRY AGAIN");}
        break;
    case 'n':
        if(first_no>=0)
        { result = log(first_no);}
        else
         {ui->display->setText("NOT DEFINED! TRY AGAIN");}
        break;
    case '.':
        ui->display->setText(ui->display->text()+".");
        break;
    case '(':
        ui->display->setText("(");
        break;
    case ')':
        ui->display->setText(")");
        break;
    case '%':
        result = first_no*second_no/100;
        break;
    }
    ui->display->setText(QString::number(result));

}

































































