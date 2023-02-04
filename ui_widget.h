/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget_main;
    QWidget *menu;
    QLabel *label_3;
    QFrame *frame_4;
    QPushButton *but_waiter;
    QPushButton *but_boss;
    QFrame *frame_3;
    QFrame *frame_2;
    QFrame *frame;
    QPushButton *but_guest;
    QWidget *page_choosetable;
    QLabel *label_9;
    QPushButton *but_esc_choosetable;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_6;
    QFrame *frame_7;
    QFrame *frame_8;
    QPushButton *but_table1;
    QPushButton *but_table2;
    QPushButton *but_table3;
    QFrame *frame_9;
    QFrame *frame_10;
    QFrame *frame_11;
    QPushButton *but_table4;
    QPushButton *but_table5;
    QPushButton *but_table6;
    QFrame *frame_14;
    QWidget *page_waiterserve;
    QPushButton *but_esc_p4;
    QTableWidget *waiterRecordTab;
    QPushButton *but_serve;
    QLabel *label_5;
    QWidget *page_bosscheck;
    QPushButton *but_esc_p5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *bossRecordTab;
    QPushButton *but_caculateTol;
    QLabel *label_12;
    QWidget *tab_2;
    QLabel *label_guestreview;
    QLabel *label_17;
    QWidget *page_guest;
    QPushButton *but_esc_p3;
    QListWidget *menuListWidget;
    QLabel *label_13;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *but_guestreview;
    QSpacerItem *verticalSpacer;
    QPushButton *but_checkorder;
    QSpacerItem *verticalSpacer_3;
    QPushButton *but_order;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_checkorder;
    QPushButton *but_esc_p6;
    QTableWidget *orderRecordTab;
    QLabel *label_total;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_16;
    QRadioButton *radiobut_ta1;
    QSpacerItem *verticalSpacer_15;
    QRadioButton *radiobut_ta2;
    QSpacerItem *verticalSpacer_14;
    QRadioButton *radiobut_ta3;
    QSpacerItem *verticalSpacer_13;
    QRadioButton *radiobut_ta4;
    QSpacerItem *verticalSpacer_17;
    QRadioButton *radiobut_ta5;
    QSpacerItem *verticalSpacer_18;
    QRadioButton *radiobut_ta6;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_8;
    QLabel *label_4;
    QPushButton *but_delorder;
    QPushButton *but_settle;
    QWidget *page_review;
    QPushButton *but_esc_guestreview;
    QLabel *label_14;
    QPushButton *but_summit;
    QLabel *label_15;
    QPlainTextEdit *plainTextEdit;
    QFrame *frame_13;
    QWidget *page_login;
    QFrame *frame_15;
    QPushButton *but_changepassw1;
    QFrame *frame_5;
    QLineEdit *edit_waiterPassword;
    QPushButton *but_login;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *page_login2;
    QFrame *frame_17;
    QPushButton *but_changepassw2;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *but_login2;
    QLineEdit *edit_bossPassword;
    QFrame *frame_12;
    QWidget *page_changepw1;
    QLineEdit *originalpw1;
    QLineEdit *newpw1;
    QLabel *label_16;
    QLabel *label_18;
    QPushButton *but_changepw1;
    QFrame *frame_16;
    QPushButton *but_esc_changepw1;
    QWidget *page_changepw2;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *originalpw2;
    QLineEdit *newpw2;
    QPushButton *but_changepw2;
    QPushButton *but_esc_changepw2;
    QFrame *frame_18;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1081, 687);
        Widget->setStyleSheet(QStringLiteral(""));
        stackedWidget_main = new QStackedWidget(Widget);
        stackedWidget_main->setObjectName(QStringLiteral("stackedWidget_main"));
        stackedWidget_main->setGeometry(QRect(20, 50, 1061, 621));
        stackedWidget_main->setStyleSheet(QStringLiteral(""));
        menu = new QWidget();
        menu->setObjectName(QStringLiteral("menu"));
        menu->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 20, 501, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(36);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_4 = new QFrame(menu);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(40, 120, 1001, 471));
        frame_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,150);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        but_waiter = new QPushButton(frame_4);
        but_waiter->setObjectName(QStringLiteral("but_waiter"));
        but_waiter->setGeometry(QRect(350, 380, 300, 50));
        but_waiter->setMinimumSize(QSize(300, 50));
        but_waiter->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Light"));
        font1.setPointSize(11);
        but_waiter->setFont(font1);
        but_waiter->setStyleSheet(QStringLiteral(""));
        but_boss = new QPushButton(frame_4);
        but_boss->setObjectName(QStringLiteral("but_boss"));
        but_boss->setGeometry(QRect(680, 380, 300, 50));
        but_boss->setMinimumSize(QSize(300, 50));
        but_boss->setMaximumSize(QSize(300, 50));
        but_boss->setFont(font1);
        but_boss->setStyleSheet(QStringLiteral(""));
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(670, 50, 300, 300));
        frame_3->setMinimumSize(QSize(300, 300));
        frame_3->setMaximumSize(QSize(300, 300));
        frame_3->setStyleSheet(QString::fromUtf8("border-image: url(:/mainwindowpic/\345\244\264\345\203\217_\344\270\255-\347\224\267-\344\270\255.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(350, 50, 300, 300));
        frame_2->setMinimumSize(QSize(300, 300));
        frame_2->setMaximumSize(QSize(300, 300));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/mainwindowpic/\345\244\264\345\203\217_\344\270\255-\345\245\263-\344\270\255.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_4);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 50, 300, 300));
        frame->setMinimumSize(QSize(300, 300));
        frame->setMaximumSize(QSize(300, 300));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/mainwindowpic/\345\244\264\345\203\217_\344\270\255-\347\224\267-\350\200\201.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        but_guest = new QPushButton(frame_4);
        but_guest->setObjectName(QStringLiteral("but_guest"));
        but_guest->setGeometry(QRect(30, 380, 300, 50));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(but_guest->sizePolicy().hasHeightForWidth());
        but_guest->setSizePolicy(sizePolicy);
        but_guest->setMinimumSize(QSize(300, 50));
        but_guest->setMaximumSize(QSize(300, 50));
        but_guest->setFont(font1);
        but_guest->setStyleSheet(QStringLiteral(""));
        but_guest->setFlat(false);
        stackedWidget_main->addWidget(menu);
        frame_4->raise();
        label_3->raise();
        page_choosetable = new QWidget();
        page_choosetable->setObjectName(QStringLiteral("page_choosetable"));
        label_9 = new QLabel(page_choosetable);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(380, 50, 271, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font2.setPointSize(18);
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        but_esc_choosetable = new QPushButton(page_choosetable);
        but_esc_choosetable->setObjectName(QStringLiteral("but_esc_choosetable"));
        but_esc_choosetable->setGeometry(QRect(30, 20, 112, 50));
        but_esc_choosetable->setMinimumSize(QSize(100, 50));
        but_esc_choosetable->setMaximumSize(QSize(1100, 50));
        but_esc_choosetable->setFont(font1);
        layoutWidget = new QWidget(page_choosetable);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 140, 821, 480));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(layoutWidget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setMinimumSize(QSize(150, 150));
        frame_6->setMaximumSize(QSize(150, 150));
        frame_6->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_6, 0, 0, 1, 1);

        frame_7 = new QFrame(layoutWidget);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setMinimumSize(QSize(150, 150));
        frame_7->setMaximumSize(QSize(150, 150));
        frame_7->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_7, 0, 1, 1, 1);

        frame_8 = new QFrame(layoutWidget);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setMinimumSize(QSize(150, 150));
        frame_8->setMaximumSize(QSize(150, 150));
        frame_8->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_8, 0, 2, 1, 1);

        but_table1 = new QPushButton(layoutWidget);
        but_table1->setObjectName(QStringLiteral("but_table1"));
        but_table1->setMinimumSize(QSize(150, 80));
        but_table1->setMaximumSize(QSize(150, 80));
        but_table1->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table1, 1, 0, 1, 1);

        but_table2 = new QPushButton(layoutWidget);
        but_table2->setObjectName(QStringLiteral("but_table2"));
        but_table2->setMinimumSize(QSize(150, 80));
        but_table2->setMaximumSize(QSize(150, 80));
        but_table2->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table2, 1, 1, 1, 1);

        but_table3 = new QPushButton(layoutWidget);
        but_table3->setObjectName(QStringLiteral("but_table3"));
        but_table3->setMinimumSize(QSize(150, 80));
        but_table3->setMaximumSize(QSize(150, 80));
        but_table3->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table3, 1, 2, 1, 1);

        frame_9 = new QFrame(layoutWidget);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setMinimumSize(QSize(150, 150));
        frame_9->setMaximumSize(QSize(150, 150));
        frame_9->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_9, 2, 0, 1, 1);

        frame_10 = new QFrame(layoutWidget);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setMinimumSize(QSize(150, 150));
        frame_10->setMaximumSize(QSize(150, 150));
        frame_10->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_10, 2, 1, 1, 1);

        frame_11 = new QFrame(layoutWidget);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setMinimumSize(QSize(150, 150));
        frame_11->setMaximumSize(QSize(150, 150));
        frame_11->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\225\206\345\237\216-\345\271\270\347\246\217\351\244\220\346\241\214.png);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_11, 2, 2, 1, 1);

        but_table4 = new QPushButton(layoutWidget);
        but_table4->setObjectName(QStringLiteral("but_table4"));
        but_table4->setMinimumSize(QSize(150, 80));
        but_table4->setMaximumSize(QSize(150, 80));
        but_table4->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table4, 3, 0, 1, 1);

        but_table5 = new QPushButton(layoutWidget);
        but_table5->setObjectName(QStringLiteral("but_table5"));
        but_table5->setMinimumSize(QSize(150, 80));
        but_table5->setMaximumSize(QSize(150, 80));
        but_table5->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table5, 3, 1, 1, 1);

        but_table6 = new QPushButton(layoutWidget);
        but_table6->setObjectName(QStringLiteral("but_table6"));
        but_table6->setMinimumSize(QSize(150, 80));
        but_table6->setMaximumSize(QSize(150, 80));
        but_table6->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(but_table6, 3, 2, 1, 1);

        frame_14 = new QFrame(page_choosetable);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(60, 120, 901, 511));
        frame_14->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,150);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        stackedWidget_main->addWidget(page_choosetable);
        frame_14->raise();
        label_9->raise();
        but_esc_choosetable->raise();
        layoutWidget->raise();
        page_waiterserve = new QWidget();
        page_waiterserve->setObjectName(QStringLiteral("page_waiterserve"));
        but_esc_p4 = new QPushButton(page_waiterserve);
        but_esc_p4->setObjectName(QStringLiteral("but_esc_p4"));
        but_esc_p4->setGeometry(QRect(50, 40, 100, 50));
        but_esc_p4->setMinimumSize(QSize(100, 50));
        but_esc_p4->setMaximumSize(QSize(100, 50));
        but_esc_p4->setFont(font1);
        but_esc_p4->setStyleSheet(QStringLiteral(""));
        waiterRecordTab = new QTableWidget(page_waiterserve);
        if (waiterRecordTab->columnCount() < 4)
            waiterRecordTab->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        waiterRecordTab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        waiterRecordTab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        waiterRecordTab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        waiterRecordTab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        waiterRecordTab->setObjectName(QStringLiteral("waiterRecordTab"));
        waiterRecordTab->setGeometry(QRect(210, 30, 601, 601));
        waiterRecordTab->setStyleSheet(QStringLiteral("background-color:rgb(189, 217, 242,200);"));
        but_serve = new QPushButton(page_waiterserve);
        but_serve->setObjectName(QStringLiteral("but_serve"));
        but_serve->setGeometry(QRect(870, 390, 100, 100));
        but_serve->setMinimumSize(QSize(100, 100));
        but_serve->setMaximumSize(QSize(100, 100));
        but_serve->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\347\276\216\351\243\237.png);"));
        label_5 = new QLabel(page_waiterserve);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(870, 490, 101, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        stackedWidget_main->addWidget(page_waiterserve);
        page_bosscheck = new QWidget();
        page_bosscheck->setObjectName(QStringLiteral("page_bosscheck"));
        but_esc_p5 = new QPushButton(page_bosscheck);
        but_esc_p5->setObjectName(QStringLiteral("but_esc_p5"));
        but_esc_p5->setGeometry(QRect(40, 40, 100, 50));
        but_esc_p5->setMinimumSize(QSize(100, 50));
        but_esc_p5->setMaximumSize(QSize(100, 50));
        but_esc_p5->setFont(font1);
        but_esc_p5->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(page_bosscheck);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(210, 50, 771, 601));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral(""));
        bossRecordTab = new QTableWidget(tab);
        if (bossRecordTab->columnCount() < 3)
            bossRecordTab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bossRecordTab->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        bossRecordTab->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        bossRecordTab->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        bossRecordTab->setObjectName(QStringLiteral("bossRecordTab"));
        bossRecordTab->setGeometry(QRect(50, 41, 661, 371));
        but_caculateTol = new QPushButton(tab);
        but_caculateTol->setObjectName(QStringLiteral("but_caculateTol"));
        but_caculateTol->setGeometry(QRect(580, 430, 80, 80));
        but_caculateTol->setMinimumSize(QSize(80, 80));
        but_caculateTol->setMaximumSize(QSize(80, 80));
        but_caculateTol->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\347\247\257\345\210\206.png);"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(550, 520, 131, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font4.setPointSize(11);
        label_12->setFont(font4);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_guestreview = new QLabel(tab_2);
        label_guestreview->setObjectName(QStringLiteral("label_guestreview"));
        label_guestreview->setGeometry(QRect(30, 90, 691, 391));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 30, 161, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font5.setPointSize(12);
        label_17->setFont(font5);
        tabWidget->addTab(tab_2, QString());
        stackedWidget_main->addWidget(page_bosscheck);
        page_guest = new QWidget();
        page_guest->setObjectName(QStringLiteral("page_guest"));
        but_esc_p3 = new QPushButton(page_guest);
        but_esc_p3->setObjectName(QStringLiteral("but_esc_p3"));
        but_esc_p3->setGeometry(QRect(40, 20, 100, 50));
        but_esc_p3->setMinimumSize(QSize(100, 50));
        but_esc_p3->setMaximumSize(QSize(100, 50));
        but_esc_p3->setFont(font1);
        but_esc_p3->setStyleSheet(QStringLiteral(""));
        menuListWidget = new QListWidget(page_guest);
        menuListWidget->setObjectName(QStringLiteral("menuListWidget"));
        menuListWidget->setGeometry(QRect(380, 70, 621, 571));
        label_13 = new QLabel(page_guest);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(110, 160, 131, 41));
        label_13->setFont(font3);
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(page_guest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 320, 131, 31));
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(page_guest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 480, 131, 31));
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget1 = new QWidget(page_guest);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 90, 102, 498));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        but_guestreview = new QPushButton(layoutWidget1);
        but_guestreview->setObjectName(QStringLiteral("but_guestreview"));
        but_guestreview->setMinimumSize(QSize(100, 100));
        but_guestreview->setMaximumSize(QSize(100, 100));
        but_guestreview->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\350\257\204\344\273\267.png);"));

        verticalLayout->addWidget(but_guestreview);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        but_checkorder = new QPushButton(layoutWidget1);
        but_checkorder->setObjectName(QStringLiteral("but_checkorder"));
        but_checkorder->setMinimumSize(QSize(100, 100));
        but_checkorder->setMaximumSize(QSize(100, 100));
        but_checkorder->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\350\256\242\345\215\225\346\237\245\350\257\242.png);"));

        verticalLayout->addWidget(but_checkorder);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        but_order = new QPushButton(layoutWidget1);
        but_order->setObjectName(QStringLiteral("but_order"));
        but_order->setMinimumSize(QSize(100, 100));
        but_order->setMaximumSize(QSize(100, 100));
        but_order->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\350\256\242\345\215\225.png);\n"
""));

        verticalLayout->addWidget(but_order);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        stackedWidget_main->addWidget(page_guest);
        page_checkorder = new QWidget();
        page_checkorder->setObjectName(QStringLiteral("page_checkorder"));
        but_esc_p6 = new QPushButton(page_checkorder);
        but_esc_p6->setObjectName(QStringLiteral("but_esc_p6"));
        but_esc_p6->setGeometry(QRect(50, 50, 100, 50));
        but_esc_p6->setMinimumSize(QSize(100, 50));
        but_esc_p6->setMaximumSize(QSize(100, 50));
        but_esc_p6->setFont(font1);
        orderRecordTab = new QTableWidget(page_checkorder);
        if (orderRecordTab->columnCount() < 3)
            orderRecordTab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        orderRecordTab->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        orderRecordTab->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        orderRecordTab->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        orderRecordTab->setObjectName(QStringLiteral("orderRecordTab"));
        orderRecordTab->setGeometry(QRect(370, 40, 461, 581));
        orderRecordTab->setStyleSheet(QStringLiteral("background-color:rgb(189, 217, 242,200);"));
        label_total = new QLabel(page_checkorder);
        label_total->setObjectName(QStringLiteral("label_total"));
        label_total->setGeometry(QRect(820, 580, 161, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font6.setPointSize(14);
        label_total->setFont(font6);
        layoutWidget2 = new QWidget(page_checkorder);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(860, 190, 133, 393));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_16 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_16);

        radiobut_ta1 = new QRadioButton(layoutWidget2);
        radiobut_ta1->setObjectName(QStringLiteral("radiobut_ta1"));
        radiobut_ta1->setFont(font3);
        radiobut_ta1->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta1);

        verticalSpacer_15 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_15);

        radiobut_ta2 = new QRadioButton(layoutWidget2);
        radiobut_ta2->setObjectName(QStringLiteral("radiobut_ta2"));
        radiobut_ta2->setFont(font3);
        radiobut_ta2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta2);

        verticalSpacer_14 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_14);

        radiobut_ta3 = new QRadioButton(layoutWidget2);
        radiobut_ta3->setObjectName(QStringLiteral("radiobut_ta3"));
        radiobut_ta3->setFont(font3);
        radiobut_ta3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta3);

        verticalSpacer_13 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_13);

        radiobut_ta4 = new QRadioButton(layoutWidget2);
        radiobut_ta4->setObjectName(QStringLiteral("radiobut_ta4"));
        radiobut_ta4->setFont(font3);
        radiobut_ta4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta4);

        verticalSpacer_17 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_17);

        radiobut_ta5 = new QRadioButton(layoutWidget2);
        radiobut_ta5->setObjectName(QStringLiteral("radiobut_ta5"));
        radiobut_ta5->setFont(font3);
        radiobut_ta5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta5);

        verticalSpacer_18 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_18);

        radiobut_ta6 = new QRadioButton(layoutWidget2);
        radiobut_ta6->setObjectName(QStringLiteral("radiobut_ta6"));
        radiobut_ta6->setFont(font3);
        radiobut_ta6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(radiobut_ta6);

        verticalSpacer_19 = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_19);

        label_8 = new QLabel(page_checkorder);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 330, 141, 31));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(page_checkorder);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 480, 131, 41));
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        but_delorder = new QPushButton(page_checkorder);
        but_delorder->setObjectName(QStringLiteral("but_delorder"));
        but_delorder->setGeometry(QRect(271, 306, 80, 80));
        but_delorder->setMinimumSize(QSize(80, 80));
        but_delorder->setMaximumSize(QSize(80, 80));
        but_delorder->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\210\240\351\231\244.png);\n"
""));
        but_settle = new QPushButton(page_checkorder);
        but_settle->setObjectName(QStringLiteral("but_settle"));
        but_settle->setGeometry(QRect(271, 458, 80, 80));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(but_settle->sizePolicy().hasHeightForWidth());
        but_settle->setSizePolicy(sizePolicy1);
        but_settle->setMinimumSize(QSize(80, 80));
        but_settle->setMaximumSize(QSize(80, 80));
        but_settle->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\346\211\223\345\215\241\347\255\276\345\210\260.png);"));
        stackedWidget_main->addWidget(page_checkorder);
        page_review = new QWidget();
        page_review->setObjectName(QStringLiteral("page_review"));
        but_esc_guestreview = new QPushButton(page_review);
        but_esc_guestreview->setObjectName(QStringLiteral("but_esc_guestreview"));
        but_esc_guestreview->setGeometry(QRect(20, 20, 100, 50));
        but_esc_guestreview->setMinimumSize(QSize(100, 50));
        but_esc_guestreview->setMaximumSize(QSize(100, 50));
        but_esc_guestreview->setFont(font1);
        label_14 = new QLabel(page_review);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(410, 150, 151, 41));
        label_14->setFont(font3);
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        but_summit = new QPushButton(page_review);
        but_summit->setObjectName(QStringLiteral("but_summit"));
        but_summit->setGeometry(QRect(830, 370, 80, 80));
        but_summit->setMinimumSize(QSize(80, 80));
        but_summit->setMaximumSize(QSize(80, 80));
        but_summit->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\344\270\212\344\274\240.png);"));
        label_15 = new QLabel(page_review);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(770, 460, 201, 31));
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        plainTextEdit = new QPlainTextEdit(page_review);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(400, 200, 571, 161));
        frame_13 = new QFrame(page_review);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(20, 90, 371, 391));
        frame_13->setMinimumSize(QSize(0, 0));
        frame_13->setStyleSheet(QStringLiteral("border-image: url(:/mainwindowpic/Messages 6.png);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        stackedWidget_main->addWidget(page_review);
        page_login = new QWidget();
        page_login->setObjectName(QStringLiteral("page_login"));
        page_login->setStyleSheet(QStringLiteral(""));
        frame_15 = new QFrame(page_login);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setGeometry(QRect(190, 50, 641, 481));
        frame_15->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255,100);\n"
"border-radius:10px;"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        but_changepassw1 = new QPushButton(frame_15);
        but_changepassw1->setObjectName(QStringLiteral("but_changepassw1"));
        but_changepassw1->setGeometry(QRect(170, 370, 300, 50));
        but_changepassw1->setMinimumSize(QSize(300, 50));
        but_changepassw1->setMaximumSize(QSize(300, 50));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font7.setPointSize(16);
        but_changepassw1->setFont(font7);
        frame_5 = new QFrame(page_login);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(360, 220, 50, 50));
        frame_5->setMinimumSize(QSize(50, 50));
        frame_5->setMaximumSize(QSize(50, 50));
        frame_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\344\277\235\345\257\206.png);\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        edit_waiterPassword = new QLineEdit(page_login);
        edit_waiterPassword->setObjectName(QStringLiteral("edit_waiterPassword"));
        edit_waiterPassword->setGeometry(QRect(420, 230, 193, 24));
        edit_waiterPassword->setEchoMode(QLineEdit::Password);
        but_login = new QPushButton(page_login);
        but_login->setObjectName(QStringLiteral("but_login"));
        but_login->setGeometry(QRect(470, 260, 80, 80));
        but_login->setMinimumSize(QSize(80, 80));
        but_login->setMaximumSize(QSize(80, 80));
        but_login->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\347\231\273\345\275\225.png);\n"
""));
        label_7 = new QLabel(page_login);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 350, 131, 41));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(page_login);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 130, 308, 46));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font8.setPointSize(18);
        font8.setBold(false);
        font8.setWeight(50);
        label_6->setFont(font8);
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget_main->addWidget(page_login);
        frame_15->raise();
        frame_5->raise();
        edit_waiterPassword->raise();
        label_6->raise();
        label_7->raise();
        but_login->raise();
        page_login2 = new QWidget();
        page_login2->setObjectName(QStringLiteral("page_login2"));
        page_login2->setStyleSheet(QStringLiteral(""));
        frame_17 = new QFrame(page_login2);
        frame_17->setObjectName(QStringLiteral("frame_17"));
        frame_17->setGeometry(QRect(220, 60, 541, 381));
        frame_17->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255,100);\n"
"border-radius:10px;"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        but_changepassw2 = new QPushButton(frame_17);
        but_changepassw2->setObjectName(QStringLiteral("but_changepassw2"));
        but_changepassw2->setGeometry(QRect(120, 310, 300, 50));
        but_changepassw2->setMinimumSize(QSize(300, 50));
        but_changepassw2->setMaximumSize(QSize(300, 50));
        but_changepassw2->setFont(font7);
        label_10 = new QLabel(page_login2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(350, 90, 308, 46));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(page_login2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(430, 280, 131, 51));
        label_11->setFont(font3);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        but_login2 = new QPushButton(page_login2);
        but_login2->setObjectName(QStringLiteral("but_login2"));
        but_login2->setGeometry(QRect(460, 200, 80, 80));
        but_login2->setMinimumSize(QSize(80, 80));
        but_login2->setMaximumSize(QSize(80, 80));
        but_login2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\347\231\273\345\275\225.png);"));
        edit_bossPassword = new QLineEdit(page_login2);
        edit_bossPassword->setObjectName(QStringLiteral("edit_bossPassword"));
        edit_bossPassword->setGeometry(QRect(410, 170, 193, 24));
        edit_bossPassword->setEchoMode(QLineEdit::Password);
        frame_12 = new QFrame(page_login2);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(350, 160, 50, 50));
        frame_12->setMinimumSize(QSize(50, 50));
        frame_12->setMaximumSize(QSize(50, 50));
        frame_12->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\344\277\235\345\257\206.png);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        stackedWidget_main->addWidget(page_login2);
        label_10->raise();
        label_11->raise();
        frame_17->raise();
        but_login2->raise();
        edit_bossPassword->raise();
        frame_12->raise();
        page_changepw1 = new QWidget();
        page_changepw1->setObjectName(QStringLiteral("page_changepw1"));
        originalpw1 = new QLineEdit(page_changepw1);
        originalpw1->setObjectName(QStringLiteral("originalpw1"));
        originalpw1->setGeometry(QRect(350, 170, 261, 31));
        originalpw1->setEchoMode(QLineEdit::Password);
        newpw1 = new QLineEdit(page_changepw1);
        newpw1->setObjectName(QStringLiteral("newpw1"));
        newpw1->setGeometry(QRect(350, 240, 261, 31));
        newpw1->setEchoMode(QLineEdit::Password);
        label_16 = new QLabel(page_changepw1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(240, 170, 91, 31));
        label_16->setFont(font4);
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(page_changepw1);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(250, 240, 81, 31));
        label_18->setFont(font4);
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        but_changepw1 = new QPushButton(page_changepw1);
        but_changepw1->setObjectName(QStringLiteral("but_changepw1"));
        but_changepw1->setGeometry(QRect(330, 330, 300, 50));
        but_changepw1->setMinimumSize(QSize(300, 50));
        but_changepw1->setMaximumSize(QSize(300, 50));
        but_changepw1->setFont(font7);
        frame_16 = new QFrame(page_changepw1);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setGeometry(QRect(160, 90, 601, 371));
        frame_16->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255,100);\n"
"border-radius:10px;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        but_esc_changepw1 = new QPushButton(page_changepw1);
        but_esc_changepw1->setObjectName(QStringLiteral("but_esc_changepw1"));
        but_esc_changepw1->setGeometry(QRect(60, 40, 100, 50));
        but_esc_changepw1->setMinimumSize(QSize(100, 50));
        but_esc_changepw1->setMaximumSize(QSize(100, 50));
        but_esc_changepw1->setFont(font4);
        stackedWidget_main->addWidget(page_changepw1);
        frame_16->raise();
        originalpw1->raise();
        newpw1->raise();
        label_16->raise();
        label_18->raise();
        but_changepw1->raise();
        but_esc_changepw1->raise();
        page_changepw2 = new QWidget();
        page_changepw2->setObjectName(QStringLiteral("page_changepw2"));
        label_19 = new QLabel(page_changepw2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(260, 160, 101, 31));
        label_19->setFont(font5);
        label_19->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_20 = new QLabel(page_changepw2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(270, 230, 71, 31));
        label_20->setFont(font5);
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        originalpw2 = new QLineEdit(page_changepw2);
        originalpw2->setObjectName(QStringLiteral("originalpw2"));
        originalpw2->setGeometry(QRect(390, 160, 201, 31));
        originalpw2->setEchoMode(QLineEdit::Password);
        newpw2 = new QLineEdit(page_changepw2);
        newpw2->setObjectName(QStringLiteral("newpw2"));
        newpw2->setGeometry(QRect(390, 224, 201, 31));
        newpw2->setEchoMode(QLineEdit::Password);
        but_changepw2 = new QPushButton(page_changepw2);
        but_changepw2->setObjectName(QStringLiteral("but_changepw2"));
        but_changepw2->setGeometry(QRect(340, 320, 300, 50));
        but_changepw2->setMinimumSize(QSize(300, 50));
        but_changepw2->setMaximumSize(QSize(300, 50));
        but_changepw2->setFont(font7);
        but_esc_changepw2 = new QPushButton(page_changepw2);
        but_esc_changepw2->setObjectName(QStringLiteral("but_esc_changepw2"));
        but_esc_changepw2->setGeometry(QRect(60, 60, 100, 50));
        but_esc_changepw2->setMinimumSize(QSize(100, 50));
        but_esc_changepw2->setMaximumSize(QSize(100, 50));
        but_esc_changepw2->setFont(font1);
        frame_18 = new QFrame(page_changepw2);
        frame_18->setObjectName(QStringLiteral("frame_18"));
        frame_18->setGeometry(QRect(220, 100, 561, 371));
        frame_18->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255,100);\n"
"border-radius:10px;"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        stackedWidget_main->addWidget(page_changepw2);
        frame_18->raise();
        label_19->raise();
        label_20->raise();
        originalpw2->raise();
        newpw2->raise();
        but_changepw2->raise();
        but_esc_changepw2->raise();
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1000, 10, 50, 50));
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/\345\205\263\351\227\255.png);"));

        retranslateUi(Widget);

        stackedWidget_main->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\350\272\253\344\273\275", Q_NULLPTR));
        but_waiter->setText(QApplication::translate("Widget", "WAITER", Q_NULLPTR));
        but_boss->setText(QApplication::translate("Widget", "BOSS", Q_NULLPTR));
        but_guest->setText(QApplication::translate("Widget", "GUEST", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\351\244\220\346\241\214", Q_NULLPTR));
        but_esc_choosetable->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        but_table1->setText(QString());
        but_table2->setText(QString());
        but_table3->setText(QString());
        but_table4->setText(QString());
        but_table5->setText(QString());
        but_table6->setText(QString());
        but_esc_p4->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = waiterRecordTab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = waiterRecordTab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\347\261\273\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = waiterRecordTab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\344\273\267\346\240\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = waiterRecordTab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\346\241\214\345\217\267", Q_NULLPTR));
        but_serve->setText(QString());
        label_5->setText(QApplication::translate("Widget", "\345\267\262\344\270\212\350\217\234", Q_NULLPTR));
        but_esc_p5->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = bossRecordTab->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = bossRecordTab->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\347\261\273\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = bossRecordTab->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "\344\273\267\346\240\274", Q_NULLPTR));
        but_caculateTol->setText(QString());
        label_12->setText(QApplication::translate("Widget", "\350\256\241\347\256\227\351\224\200\345\224\256\346\200\273\351\242\235", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_guestreview->setText(QString());
        label_17->setText(QApplication::translate("Widget", "\346\224\266\345\210\260\347\232\204\350\257\204\344\273\267\357\274\232", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        but_esc_p3->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "\351\241\276\345\256\242\350\257\204\344\273\267", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\237\245\347\234\213\350\256\242\345\215\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\212\240\345\205\245\350\256\242\345\215\225", Q_NULLPTR));
        but_guestreview->setText(QString());
        but_checkorder->setText(QString());
        but_order->setText(QString());
        but_esc_p6->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = orderRecordTab->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = orderRecordTab->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "\347\261\273\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = orderRecordTab->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "\344\273\267\346\240\274", Q_NULLPTR));
        label_total->setText(QString());
        radiobut_ta1->setText(QApplication::translate("Widget", "\344\270\200\345\217\267\346\241\214", Q_NULLPTR));
        radiobut_ta2->setText(QApplication::translate("Widget", "\344\272\214\345\217\267\346\241\214", Q_NULLPTR));
        radiobut_ta3->setText(QApplication::translate("Widget", "\344\270\211\345\217\267\346\241\214", Q_NULLPTR));
        radiobut_ta4->setText(QApplication::translate("Widget", "\345\233\233\345\217\267\346\241\214", Q_NULLPTR));
        radiobut_ta5->setText(QApplication::translate("Widget", "\344\272\224\345\217\267\346\241\214", Q_NULLPTR));
        radiobut_ta6->setText(QApplication::translate("Widget", "\345\205\255\345\217\267\346\241\214", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\350\256\242\345\215\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\347\273\223\347\256\227", Q_NULLPTR));
        but_delorder->setText(QString());
        but_settle->setText(QString());
        but_esc_guestreview->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        label_14->setText(QApplication::translate("Widget", "\346\202\250\347\232\204\350\257\204\344\273\267\357\274\232", Q_NULLPTR));
        but_summit->setText(QString());
        label_15->setText(QApplication::translate("Widget", "\346\217\220\344\272\244\346\210\221\347\232\204\350\257\204\344\273\267", Q_NULLPTR));
        but_changepassw1->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        but_login->setText(QString());
        label_7->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\347\231\273\345\275\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\256\277\351\227\256\345\257\206\347\240\201", Q_NULLPTR));
        but_changepassw2->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\256\277\351\227\256\345\257\206\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\347\231\273\345\275\225", Q_NULLPTR));
        but_login2->setText(QString());
        label_16->setText(QApplication::translate("Widget", "\345\216\237\345\247\213\345\257\206\347\240\201", Q_NULLPTR));
        label_18->setText(QApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        but_changepw1->setText(QApplication::translate("Widget", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        but_esc_changepw1->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        label_19->setText(QApplication::translate("Widget", "\345\216\237\345\247\213\345\257\206\347\240\201", Q_NULLPTR));
        label_20->setText(QApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        but_changepw2->setText(QApplication::translate("Widget", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        but_esc_changepw2->setText(QApplication::translate("Widget", "ESC", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
