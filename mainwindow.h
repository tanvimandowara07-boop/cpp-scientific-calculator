#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_one_clicked();

    void digit_pressed();

    void on_nine_clicked();

    void on_eight_clicked();

    void on_seven_clicked();

    void on_six_clicked();

    void on_five_clicked();

    void on_four_clicked();

    void on_three_clicked();

    void on_two_clicked();

    void on_double0_clicked();

    void on_zero_clicked();

    void on_AC_clicked();

    void on_enter_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_multiply_clicked();

    void on_divide_clicked();

    void on_cos_clicked();

    void on_sin_clicked();

    void on_log_clicked();

    void on_e_clicked();

    void on_ln_clicked();

    void on_pi_clicked();

    void on_decimal_clicked();

    void on_percentage_clicked();

    void on_leftbracket_clicked();

    void on_rightbracket_clicked();

    void on_power_clicked();

private:
    Ui::MainWindow *ui;
    double first_no;
    double second_no;
    char op;
};
#endif // MAINWINDOW_H
