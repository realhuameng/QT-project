#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("餐厅管理系统");

           setWindowFlags(Qt::FramelessWindowHint | windowFlags());

       //把窗口背景设置为透明;
           setAttribute(Qt::WA_TranslucentBackground);



    //菜单初始化
    QListWidgetItem *item = new QListWidgetItem();
    ui->menuListWidget->addItem(item);
    item->setText(QString("选择      序号          菜名          类别        价格      "));

    QListWidgetItem *item1 = new QListWidgetItem();
    QCheckBox *checkBox1= new QCheckBox ();
    ui->menuListWidget->addItem(item1);
    ui->menuListWidget->setItemWidget(item1, checkBox1);
    checkBox1->setText(QString("     1       鱼香肉丝   荤菜    48.80"));

    QListWidgetItem *item2 = new QListWidgetItem();
    QCheckBox *checkBox2= new QCheckBox ();
    ui->menuListWidget->addItem(item2);
    ui->menuListWidget->setItemWidget(item2, checkBox2);
    checkBox2->setText(QString("     2       宫保鸡丁   荤菜    48.80"));

    QListWidgetItem *item3 = new QListWidgetItem();
    QCheckBox *checkBox3= new QCheckBox ();
    ui->menuListWidget->addItem(item3);
    ui->menuListWidget->setItemWidget(item3, checkBox3);
    checkBox3->setText(QString("     3       水煮肉片   荤菜    48.80"));

    QListWidgetItem *item4 = new QListWidgetItem();
    QCheckBox *checkBox4= new QCheckBox ();
    ui->menuListWidget->addItem(item4);
    ui->menuListWidget->setItemWidget(item4, checkBox4);
    checkBox4->setText(QString("     4       宫保鸡丁   荤菜    48.80"));

    QListWidgetItem *item5 = new QListWidgetItem();
    QCheckBox *checkBox5= new QCheckBox ();
    ui->menuListWidget->addItem(item5);
    ui->menuListWidget->setItemWidget(item5, checkBox5);
    checkBox5->setText(QString("     5       锅包肉     荤菜    48.80"));

    QListWidgetItem *item6 = new QListWidgetItem();
    QCheckBox *checkBox6= new QCheckBox ();
    ui->menuListWidget->addItem(item6);
    ui->menuListWidget->setItemWidget(item6, checkBox6);
    checkBox6->setText(QString("     6       口水鸡     荤菜    48.80"));

    QListWidgetItem *item7 = new QListWidgetItem();
    QCheckBox *checkBox7= new QCheckBox ();
    ui->menuListWidget->addItem(item7);
    ui->menuListWidget->setItemWidget(item7, checkBox7);
    checkBox7->setText(QString("     7       溜肉段     荤菜    48.80"));

    QListWidgetItem *item8 = new QListWidgetItem();
    QCheckBox *checkBox8= new QCheckBox ();
    ui->menuListWidget->addItem(item8);
    ui->menuListWidget->setItemWidget(item8, checkBox8);
    checkBox8->setText(QString("     8       地三鲜     素菜    38.80"));

    QListWidgetItem *item9 = new QListWidgetItem();
    QCheckBox *checkBox9= new QCheckBox ();
    ui->menuListWidget->addItem(item9);
    ui->menuListWidget->setItemWidget(item9, checkBox9);
    checkBox9->setText(QString("     9       酸辣土豆丝 素菜    38.80"));

    QListWidgetItem *item10 = new QListWidgetItem();
    QCheckBox *checkBox10= new QCheckBox ();
    ui->menuListWidget->addItem(item10);
    ui->menuListWidget->setItemWidget(item10, checkBox10);
    checkBox10->setText(QString("    10       红烧茄子   素菜    38.80"));

    QListWidgetItem *item11 = new QListWidgetItem();
    QCheckBox *checkBox11= new QCheckBox ();
    ui->menuListWidget->addItem(item11);
    ui->menuListWidget->setItemWidget(item11, checkBox11);
    checkBox11->setText(QString("    11       番茄炒蛋   素菜    38.80"));

    QListWidgetItem *item12 = new QListWidgetItem();
    QCheckBox *checkBox12= new QCheckBox ();
    ui->menuListWidget->addItem(item12);
    ui->menuListWidget->setItemWidget(item12, checkBox12);
    checkBox12->setText(QString("    12       凉拌黄瓜   素菜    24.90"));

    QListWidgetItem *item13 = new QListWidgetItem();
    QCheckBox *checkBox13= new QCheckBox ();
    ui->menuListWidget->addItem(item13);
    ui->menuListWidget->setItemWidget(item13, checkBox13);
    checkBox13->setText(QString("    13       油炸花生米 素菜    24.90"));

    QListWidgetItem *item14 = new QListWidgetItem();
    QCheckBox *checkBox14= new QCheckBox ();
    ui->menuListWidget->addItem(item14);
    ui->menuListWidget->setItemWidget(item14, checkBox14);
    checkBox14->setText(QString("    14       凉拌白肉   素菜    24.90"));

    //设置表格样式
    ui->menuListWidget->setFrameShape(QListWidget::NoFrame);
    ui->menuListWidget->setStyleSheet("QListWidget::item {color:#9ba88d; background-color:rgb(189, 217, 242);height:40px; padding-left:20px;border:0px solid gray; }");
    checkBox1->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox2->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox3->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox4->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox5->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox6->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox7->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox8->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox9->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox10->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox11->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox12->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox13->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");
    checkBox14->setStyleSheet("QCheckBox:hover {color:white;background-color:rgb(242, 181, 68);}");

    //将按钮添加到绑定到QButtonGroup
    QButtonGroup *bgp = new QButtonGroup(this);
    bgp->addButton(checkBox1);bgp->addButton(checkBox2);bgp->addButton(checkBox3);bgp->addButton(checkBox4);
    bgp->addButton(checkBox5);bgp->addButton(checkBox6);bgp->addButton(checkBox7);bgp->addButton(checkBox8);
    bgp->addButton(checkBox9);bgp->addButton(checkBox10);bgp->addButton(checkBox11);bgp->addButton(checkBox12);bgp->addButton(checkBox13);
    bgp->setObjectName("oneButtonGroup");
    bgp->setExclusive(false);


    //pushbutton设置

    ui->but_guest->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);;color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_changepassw1->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);;color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_changepw1->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);;color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_changepassw2->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);;color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_changepw2->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);;color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_waiter->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_boss->setStyleSheet("QPushButton {background-color:rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_p3->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_p4->setStyleSheet("QPushButton {background-color:rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_p5->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_p6->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table1->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table2->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table3->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table4->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table5->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_table6->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_choosetable->setStyleSheet("QPushButton {background-color: rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_guestreview->setStyleSheet("QPushButton {background-color:rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_changepw1->setStyleSheet("QPushButton {background-color:rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");
    ui->but_esc_changepw2->setStyleSheet("QPushButton {background-color:rgb(242, 181, 68,200);color:white;border:none;border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                 "QPushButton:hover {background-color:rgb(189, 217, 242,200);}");


    //选桌界面
    //初始化餐桌状态
    QString status("空闲");
    QString str1("一号桌\n"); QString str2("二号桌\n"); QString str3("三号桌\n");
    QString str4("四号桌\n"); QString str5("五号桌\n"); QString str6("六号桌\n");
    ui->but_table1->setText(str1+status);ui->but_table2->setText(str2+status);
    ui->but_table3->setText(str3+status);ui->but_table4->setText(str4+status);
    ui->but_table5->setText(str5+status);ui->but_table6->setText(str6+status);


    //查看订单页面
    ui->orderRecordTab->setColumnWidth(0,150);//设置列宽
    ui->orderRecordTab->setColumnWidth(1,150);
    ui->orderRecordTab->setColumnWidth(2,150);
    ui->orderRecordTab->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->orderRecordTab->setEditTriggers(QAbstractItemView::NoEditTriggers);//表格内容不可编辑
    ui->orderRecordTab->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);  //设置滚动隐藏
    ui->orderRecordTab->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(189, 217, 242,200);color:white;}");
    ui->orderRecordTab->selectRow(0);//整行选中
    ui->orderRecordTab->setShowGrid(false);   //取消表格内线




    //点击结算弹出窗口并计算总金额
    connect(ui->but_settle,SIGNAL(clicked()),this,SLOT(settlement()));

    //评价界面
    ui->plainTextEdit->setPlaceholderText("在此出输入您的评价");




    //服务员界面
    ui->waiterRecordTab->setColumnWidth(0,150);//设置列宽
    ui->waiterRecordTab->setColumnWidth(1,150);
    ui->waiterRecordTab->setColumnWidth(2,150);
    ui->waiterRecordTab->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->waiterRecordTab->setEditTriggers(QAbstractItemView::NoEditTriggers);//表格内容不可编辑
    ui->waiterRecordTab->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);  //设置滚动隐藏
    ui->waiterRecordTab->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(189, 217, 242);color:white;}");
    ui->waiterRecordTab->selectRow(0);//整行选中
    ui->waiterRecordTab->setShowGrid(false);   //取消表格内线

    //整行选中
    ui->waiterRecordTab->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    //密码界面
    ui->edit_waiterPassword->setMaxLength(10);  //最多输入10个字符
    ui->edit_waiterPassword->setPlaceholderText("密码为6~10位纯数字");
    ui->edit_waiterPassword->setStyleSheet("font-size:17px; color:#BECBCF;");

    ui->edit_bossPassword->setMaxLength(10);  //最多输入10个字符
    ui->edit_bossPassword->setPlaceholderText("密码为6~10位纯数字");
    ui->edit_bossPassword->setStyleSheet("font-size:17px; color:#BECBCF;");

    //老板界面

    ui->tabWidget->setIconSize(QSize(50, 25));              // 设置图标整体大小
    ui->tabWidget->setTabShape(QTabWidget::Triangular);    //设置选项卡形状
    // 设置选项卡1
    ui->tabWidget->setTabText(0,QString("查看销售情况"));           // 设置选项卡文本
    ui->tabWidget->setTabIcon(0,QIcon(":icon/积分兑换.png"));          // 设置选项卡图标
    // 设置选项卡2
    ui->tabWidget->setTabText(1,QString("查看顾客评价"));           // 设置选项卡文本
    ui->tabWidget->setTabIcon(1,QIcon(":icon/评价.png"));          // 设置选项卡图标

    //查看销售情况界面
    ui->bossRecordTab->setColumnWidth(0,200);//设置列宽
    ui->bossRecordTab->setColumnWidth(1,200);
    ui->bossRecordTab->setColumnWidth(2,200);






    waiterpw =("123456");//初始密码设置
    bosspw=("123456");



}

Widget::~Widget()
{
    delete ui;
}





void Widget::on_but_guest_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_choosetable);

}

void Widget::on_but_waiter_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_login);
}

void Widget::on_but_boss_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_login2);

}

void Widget::on_but_esc_p3_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->menu);
}

void Widget::on_but_esc_p4_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->menu);
}

void Widget::on_but_esc_p5_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->menu);
}
void Widget::on_but_esc_choosetable_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->menu);
}
void Widget::on_but_esc_guestreview_released()
{
     ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
}


void Widget::on_but_order_clicked() //按下提交订单按钮
{
    //查看订单显示项目设置
    QStringList name;
    name<<"鱼香肉丝"<<"宫保鸡丁"<<"水煮肉片"<<"锅包肉"<<"口水鸡"<<"溜肉段"<<"地三鲜"<<"酸辣土豆丝"<<"红烧茄子"<<"番茄炒蛋"<<"凉拌黄瓜"<<"油炸花生米"<<"凉拌白肉";
    QStringList category;
    category<<"荤菜"<<"荤菜"<<"荤菜"<<"荤菜"<<"荤菜"<<"荤菜"<<"素菜"<<"素菜"<<"素菜"<<"素菜"<<"凉拌"<<"凉拌"<<"凉拌";
    QStringList price;
    price<<"48.80"<<"48.80"<<"48.80"<<"48.80"<<"48.80"<<"48.80"<<"38.80"<<"38.80"<<"38.80"<<"38.80"<<"24.90"<<"24.90"<<"24.90";


    QButtonGroup *twoBgp = this->findChild<QButtonGroup*>("oneButtonGroup");
    if(!twoBgp)
    return;
    //将所有的按钮储存起来
    QList<QAbstractButton*> listBt = twoBgp->buttons();
    if(listBt.isEmpty())
    return;
    //遍历查找所有被选择的按钮
    for(int i =0 ; i < listBt.size() ; i++)
    {
        if(listBt[i]->isChecked())
        {


           int rowcount=ui->orderRecordTab->rowCount();//查看订单页面增加一行数据栏
           ui->orderRecordTab->insertRow(rowcount);
           ui->orderRecordTab->setItem(rowcount,0,new QTableWidgetItem(name.at(i)));
           ui->orderRecordTab->setItem(rowcount,1,new QTableWidgetItem(category.at(i)));
           ui->orderRecordTab->setItem(rowcount,2,new QTableWidgetItem(price.at(i)));




           //点击提交订单后取消按钮的选中
           listBt[i]->setChecked(false);
        }
    }



    //订单提交后弹出提示框
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText("您的订单已提交成功！");
    Yes.exec();



}



void Widget::on_but_checkorder_clicked()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_checkorder);
}

void Widget::on_but_esc_p6_clicked()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
}
void Widget::on_but_guestreview_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_review);
}
void Widget::settlement()
{
    QButtonGroup *block=new QButtonGroup(this);

    block->addButton(ui->radiobut_ta1);block->addButton(ui->radiobut_ta2);block->addButton(ui->radiobut_ta3);
    block->addButton(ui->radiobut_ta4);block->addButton(ui->radiobut_ta5);block->addButton(ui->radiobut_ta6);
    block->setId((ui->radiobut_ta1),1);block->setId((ui->radiobut_ta2),2);block->setId((ui->radiobut_ta3),3);
    block->setId((ui->radiobut_ta4),4);block->setId((ui->radiobut_ta5),5);block->setId((ui->radiobut_ta6),6);
    if(block->checkedId()!=1&&block->checkedId()!=2&&block->checkedId()!=3&&block->checkedId()!=4&&block->checkedId()!=5&&block->checkedId()!=6)
       {

    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText("您还未选择桌号");
    Yes.exec();
    return;

    }


    //计算总金额
    int row=ui->orderRecordTab->rowCount();

    double totalPrice=0;
    if(!row) return;
    for(int i=0;i!=row;++i)
    {
        QString str=ui->orderRecordTab->item(i,2)->text();

        totalPrice+=str.toDouble();
    }

    //将总金额转化为字符串
    QString reminder("您的订单结算成功!总计：");
    reminder+=QString::number(totalPrice);
    //点击结算后弹出提示框
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText(reminder);
    Yes.exec();

    //将订单内容发送到服务员界面

    for(int i=0;i!=row;i++)
    {

            int rowcount=ui->waiterRecordTab->rowCount();
            ui->waiterRecordTab->insertRow(rowcount);
            //读取订单界面的内容
            ui->waiterRecordTab->setItem(rowcount,0,new QTableWidgetItem(ui->orderRecordTab->item(i,0)->text()));
            ui->waiterRecordTab->setItem(rowcount,1,new QTableWidgetItem(ui->orderRecordTab->item(i,1)->text()));
            ui->waiterRecordTab->setItem(rowcount,2,new QTableWidgetItem(ui->orderRecordTab->item(i,2)->text()));
            ui->waiterRecordTab->setItem(rowcount,3,new QTableWidgetItem(QString::number(block->checkedId())));



    }
    //发送到老板的查看销售情况界面
    for(int i=0;i!=row;i++)
    {

            int rowcount=ui->bossRecordTab->rowCount();
            ui->bossRecordTab->insertRow(rowcount);
            //读取订单界面的内容
            ui->bossRecordTab->setItem(rowcount,0,new QTableWidgetItem(ui->orderRecordTab->item(i,0)->text()));
            ui->bossRecordTab->setItem(rowcount,1,new QTableWidgetItem(ui->orderRecordTab->item(i,1)->text()));
            ui->bossRecordTab->setItem(rowcount,2,new QTableWidgetItem(ui->orderRecordTab->item(i,2)->text()));




    }
    //删除已经提交成功的订单记录
    for(int row = ui->orderRecordTab->rowCount() - 1;row >= 0; row--)
    {
        ui->orderRecordTab->removeRow(row);
    }


}


void Widget::on_but_serve_released()
{
    //目前未上的菜数
    int curRow=ui->waiterRecordTab->rowCount();
    //删除选中项
    int rowIndex = ui->waiterRecordTab->currentRow();
QT_TRY
    {
     rowCheck(rowIndex);
     ui->waiterRecordTab->removeRow(rowIndex);
     --curRow;
     QString p=QString::number(curRow);
     QString q=("上菜成功！还剩道菜未上");
     q=q.insert(7,p);
     QMessageBox Yes;
     Yes.setWindowTitle("温馨提示");
     Yes.setText(q);
     Yes.exec();


    }
QT_CATCH(int)
    {
        QMessageBox warning;
        warning.setWindowTitle("提示");
        warning.setText("未选择任何订单");
        warning.exec();
    }


}

void Widget::on_but_login_clicked()
{
    //点击登录后检查密码是否正确
    QT_TRY
    {
    passwordCheck1(ui->edit_waiterPassword->text());
    ui->edit_waiterPassword->clear();
    ui->stackedWidget_main->setCurrentWidget(ui->page_waiterserve);
    //登录成功提示
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText("您已登录成功");
    Yes.exec();

    }
    QT_CATCH(QString)
    {
        //登录失败提示
        QMessageBox Warning;
        Warning.setWindowTitle("登录失败");
        Warning.setText("密码输入错误！请重新输入");
        Warning.exec();

        ui->edit_waiterPassword->clear();
    }


}



void Widget::on_but_delorder_clicked()
{
    //删除选中项
    int rowIndex = ui->orderRecordTab->currentRow();
QT_TRY{

    rowCheck(rowIndex);
    ui->orderRecordTab->removeRow(rowIndex);
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText("删除成功");
    Yes.exec();

   }
    QT_CATCH(int)
    {
        QMessageBox warning;
        warning.setWindowTitle("提示");
        warning.setText("目前无任何订单");
        warning.exec();
    }

}

void Widget::on_but_table1_released()
{
    QString str = ui->but_table1->text().section('\n',1,1);
   if(str==tr("空闲"))
   {
        //更改餐桌状态
        ui->but_table1->setText("一号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate1()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);//跳转界面
    }

   else
      {//餐桌占用提示
          QMessageBox msgBox;
          msgBox.setWindowTitle("温馨提示");
          msgBox.setText("此餐桌正在使用，请另选餐桌！");
          msgBox.exec();




       }

}
void Widget::UpDate1() //计时器触发函数
{
    ui->but_table1->setText("一号桌\n空闲");
}



void Widget::on_but_table2_released()
{
    QString str = ui->but_table2->text().section('\n',1,1);
   if(str==tr("空闲"))
    {

        //更改餐桌状态
        ui->but_table2->setText("二号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate2()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
    }

     else
       {//餐桌占用提示
           QMessageBox msgBox;
           msgBox.setWindowTitle("温馨提示");
           msgBox.setText("此餐桌正在使用，请另选餐桌！");
           msgBox.exec();
       }
}
void Widget::UpDate2() //计时器触发函数
{
    ui->but_table2->setText("二号桌\n空闲");
}

void Widget::on_but_table3_released()
{
    QString str = ui->but_table3->text().section('\n',1,1);
     if(str==tr("空闲"))
    {

        //更改餐桌状态
        ui->but_table3->setText("三号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate3()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
    }
     else
       {//餐桌占用提示
           QMessageBox msgBox;
           msgBox.setWindowTitle("温馨提示");           msgBox.setText("此餐桌正在使用，请另选餐桌！");
           msgBox.exec();
       }
}
void Widget::UpDate3() //计时器触发函数
{
    ui->but_table3->setText("三号桌\n空闲");
}


void Widget::on_but_table4_released()
{
    QString str = ui->but_table4->text().section('\n',1,1);
    if(str==tr("空闲"))

    {

        //更改餐桌状态
        ui->but_table4->setText("四号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate4()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
}
      else
       {//餐桌占用提示
           QMessageBox msgBox;
           msgBox.setWindowTitle("温馨提示");           msgBox.setText("此餐桌正在使用，请另选餐桌！");
           msgBox.exec();
       }
}
void Widget::UpDate4() //计时器触发函数
{
    ui->but_table4->setText("四号桌\n空闲");
}


void Widget::on_but_table5_released()
{
    QString str = ui->but_table5->text().section('\n',1,1);
   if(str==tr("空闲"))
    {

        //更改餐桌状态
        ui->but_table5->setText("四号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate5()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);
    }
     else
       {//餐桌占用提示
           QMessageBox msgBox;
           msgBox.setWindowTitle("温馨提示");           msgBox.setText("此餐桌正在使用，请另选餐桌！");
           msgBox.exec();
       }
}
void Widget::UpDate5() //计时器触发函数
{
    ui->but_table5->setText("五号桌\n空闲");
}



void Widget::on_but_table6_released()
{
    QString str = ui->but_table6->text().section('\n',1,1);
    if(str==tr("空闲"))
    {

        //更改餐桌状态
        ui->but_table6->setText("五号桌\n使用");
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(UpDate6()));
        timer->start(10000);//计时十秒后触发更新函数，更新餐桌状态为空闲
        ui->stackedWidget_main->setCurrentWidget(ui->page_guest);

    }
     else
       {//餐桌占用提示
           QMessageBox msgBox;
           msgBox.setWindowTitle("温馨提示");           msgBox.setText("此餐桌正在使用，请另选餐桌！");
           msgBox.exec();
       }
}
void Widget::UpDate6() //计时器触发函数
{
    ui->but_table6->setText("六号桌\n空闲");
}





void Widget::on_but_login2_clicked()
{
    //点击登录后检查密码是否正确
   QT_TRY
    {
    passwordCheck2(ui->edit_bossPassword->text());

    ui->edit_bossPassword->clear();
    ui->stackedWidget_main->setCurrentWidget(ui->page_bosscheck);
    //登录成功提示
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText("您已登录成功");
    Yes.exec();
    }
   QT_CATCH(QString)
    {
        //登录失败提示
        QMessageBox Warning;
        Warning.setWindowTitle("登录失败");
        Warning.setText("密码输入错误！请重新输入");
        Warning.exec();

        ui->edit_bossPassword->clear();
    }

}



void Widget::on_but_caculateTol_released()
{

    //计算总金额
    int row=ui->bossRecordTab->rowCount();

    double totalPrice=0;
    QT_TRY
    {
        rowCheck2(row);
    }
    QT_CATCH(int)

    {
        //当前无销售记录
        QMessageBox warning;
        warning.setWindowTitle("提示");
        warning.setText("当前无销售记录");
        warning.exec();
        return;

    }
    for(int i=0;i!=row;++i)
    {
        QString str=ui->bossRecordTab->item(i,2)->text();

        totalPrice+=str.toDouble();
    }

    //将总金额转化为字符串
    QString reminder("当日销售额总计：");
    reminder+=QString::number(totalPrice);
    //点击结算后弹出提示框
    QMessageBox Yes;
    Yes.setWindowTitle("温馨提示");
    Yes.setText(reminder);
    Yes.exec();
}




void Widget::on_but_summit_released()
{

    QString addstr=ui->plainTextEdit->toPlainText();
    QString curstr=ui->label_guestreview->text();
    QString str=curstr+"\n"+addstr;
    if(addstr.isEmpty())
    {
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("您输入的评价为空");
        reminder.exec();
        return;
    }
    else
    {
    ui->label_guestreview->setText(str);
    ui->plainTextEdit->clear();

    QMessageBox reminder;
    reminder.setWindowTitle("感谢您的评价！");
    reminder.setText("评价成功！欢迎您下次光临！");
    reminder.exec();
    return;
    }

}
void Widget::rowCheck(int a)
{
    if(a==-1) throw(a);
}
void Widget::passwordCheck1(QString a)
{
    if(a!=waiterpw)  throw(a);
}
void Widget::passwordCheck2(QString a)
{
    if(a!=bosspw)  throw(a);
}
void Widget::tableCheck(QString a)
{
    if(a!="空闲") throw(a);
}
void Widget::rowCheck2(int a)
{
    if(a==0) throw(a);
}
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(rect(),QPixmap("://mainwindowpic/rest.jpg"),QRect());
}

void Widget::on_but_changepassw1_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_changepw1);
}

void Widget::on_but_changepw1_released()
{
    if(ui->originalpw1->text().isEmpty()||ui->newpw1->text().isEmpty())
    {
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("您输入的密码为空");
        reminder.exec();
        return;
    }
    if(ui->originalpw1->text()!=waiterpw)
    {
        ui->originalpw1->clear();
        ui->newpw1->clear();
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("原始密码输入错误");
        reminder.exec();
        return;

    }
    else
    {
        waiterpw=ui->newpw1->text();
        ui->originalpw1->clear();
        ui->newpw1->clear();
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("密码修改成功");
        reminder.exec();
        return;
    }
}

void Widget::on_but_esc_changepw1_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_login);
}


void Widget::on_but_changepw2_released()
{
    if(ui->originalpw2->text().isEmpty()||ui->newpw2->text().isEmpty())
    {
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("您输入的密码为空");
        reminder.exec();
        return;
    }
    if(ui->originalpw2->text()!=bosspw)
    {
        ui->originalpw2->clear();
        ui->newpw2->clear();
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("原始密码输入错误");
        reminder.exec();
        return;

    }
    else
    {
        bosspw=ui->newpw2->text();
        ui->originalpw2->clear();
        ui->newpw2->clear();
        QMessageBox reminder;
        reminder.setWindowTitle("温馨提示");
        reminder.setText("密码修改成功");
        reminder.exec();
        return;
    }
}

void Widget::on_but_esc_changepw2_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_login2);
}


void Widget::on_but_changepassw2_released()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_changepw2);
}

void Widget::on_pushButton_clicked()
{
    close();
}
