#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCheckBox>
#include <QMessageBox>
#include <QTimer>
#include <QString>
#include <QPaintEvent>

static QString waiterpw;
static QString bosspw;



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void rowCheck(int);
    void passwordCheck1(QString);
    void passwordCheck2(QString);
    void tableCheck(QString);
    void rowCheck2(int);



private slots:

    void settlement();
    void UpDate1();
    void UpDate2();
    void UpDate3();
    void UpDate4();
    void UpDate5();
    void UpDate6();



    void on_but_guest_released();

    void on_but_waiter_released();

    void on_but_boss_released();

    void on_but_esc_p3_released();

    void on_but_esc_p4_released();

    void on_but_esc_p5_released();

    void on_but_order_clicked();



    void on_but_checkorder_clicked();

    void on_but_esc_p6_clicked();





    void on_but_serve_released();

    void on_but_login_clicked();



    void on_but_delorder_clicked();

    void on_but_table1_released();




    void on_but_table2_released();

    void on_but_table3_released();

    void on_but_table4_released();

    void on_but_table5_released();

    void on_but_table6_released();

    void on_but_esc_choosetable_released();



    void on_but_login2_clicked();



    void on_but_caculateTol_released();

    void on_but_guestreview_released();

    void on_but_esc_guestreview_released();

    void on_but_summit_released();

    void on_but_changepassw1_released();

    void on_but_changepw1_released();

    void on_but_esc_changepw1_released();



    void on_but_changepw2_released();

    void on_but_esc_changepw2_released();



    void on_but_changepassw2_released();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
protected:
    void paintEvent(QPaintEvent *event);

};
#endif // WIDGET_H
