/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *Sex_group;
    QRadioButton *male;
    QRadioButton *female;
    QLabel *favorite_food;
    QLabel *Profession;
    QListWidget *choose_profession;
    QTextEdit *type_name;
    QGroupBox *main_food;
    QRadioButton *rice;
    QRadioButton *noodle;
    QRadioButton *noodle_2;
    QGroupBox *cuisine;
    QRadioButton *east;
    QRadioButton *west;
    QRadioButton *JP;
    QRadioButton *Kor;
    QLabel *name;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *serious_or_not;
    QCheckBox *serious;
    QPushButton *Enter;
    QTextBrowser *show_name;
    QTextBrowser *show_sex;
    QTextBrowser *show_profession;
    QTextBrowser *show_main_food;
    QTextBrowser *show_cuisine;
    QLabel *name_2;
    QLabel *name_3;
    QLabel *Profession_2;
    QLabel *name_4;
    QLabel *name_6;
    QProgressBar *progressBar;
    QPushButton *Load;
    QTableWidget *tableWidget;
    QLabel *name_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1320, 507);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Sex_group = new QGroupBox(centralWidget);
        Sex_group->setObjectName(QStringLiteral("Sex_group"));
        Sex_group->setGeometry(QRect(30, 150, 171, 71));
        QFont font;
        font.setPointSize(12);
        Sex_group->setFont(font);
        male = new QRadioButton(Sex_group);
        male->setObjectName(QStringLiteral("male"));
        male->setGeometry(QRect(20, 30, 51, 19));
        female = new QRadioButton(Sex_group);
        female->setObjectName(QStringLiteral("female"));
        female->setGeometry(QRect(80, 30, 51, 19));
        favorite_food = new QLabel(centralWidget);
        favorite_food->setObjectName(QStringLiteral("favorite_food"));
        favorite_food->setGeometry(QRect(30, 20, 201, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font1.setPointSize(30);
        favorite_food->setFont(font1);
        Profession = new QLabel(centralWidget);
        Profession->setObjectName(QStringLiteral("Profession"));
        Profession->setGeometry(QRect(30, 250, 58, 21));
        Profession->setFont(font);
        choose_profession = new QListWidget(centralWidget);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        new QListWidgetItem(choose_profession);
        choose_profession->setObjectName(QStringLiteral("choose_profession"));
        choose_profession->setGeometry(QRect(30, 290, 171, 121));
        QFont font2;
        font2.setPointSize(9);
        choose_profession->setFont(font2);
        type_name = new QTextEdit(centralWidget);
        type_name->setObjectName(QStringLiteral("type_name"));
        type_name->setGeometry(QRect(90, 90, 111, 31));
        main_food = new QGroupBox(centralWidget);
        main_food->setObjectName(QStringLiteral("main_food"));
        main_food->setGeometry(QRect(230, 90, 171, 131));
        main_food->setFont(font);
        rice = new QRadioButton(main_food);
        rice->setObjectName(QStringLiteral("rice"));
        rice->setGeometry(QRect(20, 30, 98, 19));
        noodle = new QRadioButton(main_food);
        noodle->setObjectName(QStringLiteral("noodle"));
        noodle->setGeometry(QRect(20, 60, 98, 19));
        noodle_2 = new QRadioButton(main_food);
        noodle_2->setObjectName(QStringLiteral("noodle_2"));
        noodle_2->setGeometry(QRect(20, 90, 98, 19));
        cuisine = new QGroupBox(centralWidget);
        cuisine->setObjectName(QStringLiteral("cuisine"));
        cuisine->setGeometry(QRect(230, 260, 191, 151));
        cuisine->setFont(font);
        east = new QRadioButton(cuisine);
        east->setObjectName(QStringLiteral("east"));
        east->setGeometry(QRect(20, 30, 98, 19));
        west = new QRadioButton(cuisine);
        west->setObjectName(QStringLiteral("west"));
        west->setGeometry(QRect(20, 60, 98, 19));
        JP = new QRadioButton(cuisine);
        JP->setObjectName(QStringLiteral("JP"));
        JP->setGeometry(QRect(20, 90, 98, 19));
        Kor = new QRadioButton(cuisine);
        Kor->setObjectName(QStringLiteral("Kor"));
        Kor->setGeometry(QRect(20, 120, 98, 19));
        name = new QLabel(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(30, 99, 51, 21));
        name->setFont(font);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(440, 340, 191, 71));
        serious_or_not = new QVBoxLayout(verticalLayoutWidget);
        serious_or_not->setSpacing(6);
        serious_or_not->setContentsMargins(11, 11, 11, 11);
        serious_or_not->setObjectName(QStringLiteral("serious_or_not"));
        serious_or_not->setContentsMargins(0, 0, 0, 0);
        serious = new QCheckBox(verticalLayoutWidget);
        serious->setObjectName(QStringLiteral("serious"));
        serious->setFont(font);

        serious_or_not->addWidget(serious);

        Enter = new QPushButton(verticalLayoutWidget);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setEnabled(false);
        Enter->setFont(font);

        serious_or_not->addWidget(Enter);

        show_name = new QTextBrowser(centralWidget);
        show_name->setObjectName(QStringLiteral("show_name"));
        show_name->setGeometry(QRect(440, 40, 91, 291));
        show_sex = new QTextBrowser(centralWidget);
        show_sex->setObjectName(QStringLiteral("show_sex"));
        show_sex->setGeometry(QRect(530, 40, 51, 291));
        show_profession = new QTextBrowser(centralWidget);
        show_profession->setObjectName(QStringLiteral("show_profession"));
        show_profession->setGeometry(QRect(580, 40, 91, 291));
        show_main_food = new QTextBrowser(centralWidget);
        show_main_food->setObjectName(QStringLiteral("show_main_food"));
        show_main_food->setGeometry(QRect(670, 40, 91, 291));
        show_cuisine = new QTextBrowser(centralWidget);
        show_cuisine->setObjectName(QStringLiteral("show_cuisine"));
        show_cuisine->setGeometry(QRect(760, 40, 101, 291));
        name_2 = new QLabel(centralWidget);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(470, 20, 31, 21));
        name_2->setFont(font2);
        name_3 = new QLabel(centralWidget);
        name_3->setObjectName(QStringLiteral("name_3"));
        name_3->setGeometry(QRect(540, 20, 31, 21));
        name_3->setFont(font2);
        Profession_2 = new QLabel(centralWidget);
        Profession_2->setObjectName(QStringLiteral("Profession_2"));
        Profession_2->setGeometry(QRect(610, 20, 31, 21));
        Profession_2->setFont(font2);
        name_4 = new QLabel(centralWidget);
        name_4->setObjectName(QStringLiteral("name_4"));
        name_4->setGeometry(QRect(700, 20, 31, 21));
        name_4->setFont(font2);
        name_6 = new QLabel(centralWidget);
        name_6->setObjectName(QStringLiteral("name_6"));
        name_6->setGeometry(QRect(790, 20, 31, 21));
        name_6->setFont(font2);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(650, 350, 651, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Garamond Pro"));
        font3.setPointSize(15);
        progressBar->setFont(font3);
        progressBar->setValue(0);
        Load = new QPushButton(centralWidget);
        Load->setObjectName(QStringLiteral("Load"));
        Load->setGeometry(QRect(300, 40, 93, 28));
        Load->setFont(font);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(6, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(6, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(6, 2, __qtablewidgetitem30);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(870, 40, 431, 291));
        name_5 = new QLabel(centralWidget);
        name_5->setObjectName(QStringLiteral("name_5"));
        name_5->setGeometry(QRect(870, 20, 181, 21));
        name_5->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1320, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Sex_group->setTitle(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        male->setText(QApplication::translate("MainWindow", "\347\224\267", 0));
        female->setText(QApplication::translate("MainWindow", "\345\245\263", 0));
        favorite_food->setText(QApplication::translate("MainWindow", "\347\276\216\351\243\237\345\244\247\351\233\206", 0));
        Profession->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255", 0));

        const bool __sortingEnabled = choose_profession->isSortingEnabled();
        choose_profession->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = choose_profession->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\345\273\232\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem1 = choose_profession->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\263\225\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem2 = choose_profession->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\345\242\256\344\273\231\344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem3 = choose_profession->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\345\212\215\345\243\253", 0));
        QListWidgetItem *___qlistwidgetitem4 = choose_profession->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\351\255\224\345\245\263", 0));
        QListWidgetItem *___qlistwidgetitem5 = choose_profession->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\344\270\200\351\263\264\351\251\232 \344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem6 = choose_profession->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\351\201\223\344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem7 = choose_profession->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\346\233\270\346\263\225\345\256\266", 0));
        QListWidgetItem *___qlistwidgetitem8 = choose_profession->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\347\262\276\347\256\227\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem9 = choose_profession->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\345\225\206\344\272\272", 0));
        QListWidgetItem *___qlistwidgetitem10 = choose_profession->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\351\247\235\345\256\242", 0));
        QListWidgetItem *___qlistwidgetitem11 = choose_profession->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "\345\260\221\347\210\272", 0));
        QListWidgetItem *___qlistwidgetitem12 = choose_profession->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\346\213\263\346\223\212\346\225\231\347\267\264", 0));
        QListWidgetItem *___qlistwidgetitem13 = choose_profession->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\351\201\213\345\213\225\345\256\266", 0));
        QListWidgetItem *___qlistwidgetitem14 = choose_profession->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\345\267\245\347\250\213\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem15 = choose_profession->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\253", 0));
        QListWidgetItem *___qlistwidgetitem16 = choose_profession->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "\345\255\270\347\224\237", 0));
        choose_profession->setSortingEnabled(__sortingEnabled);

        main_food->setTitle(QApplication::translate("MainWindow", "\346\234\200\345\226\234\346\255\241\347\232\204\344\270\273\351\243\237", 0));
        rice->setText(QApplication::translate("MainWindow", "\351\243\257", 0));
        noodle->setText(QApplication::translate("MainWindow", "\351\272\265", 0));
        noodle_2->setText(QApplication::translate("MainWindow", "\345\206\254\347\262\211", 0));
        cuisine->setTitle(QApplication::translate("MainWindow", "\346\234\200\345\226\234\346\255\241\345\223\252\344\270\200\347\250\256\346\226\231\347\220\206", 0));
        east->setText(QApplication::translate("MainWindow", "\344\270\255\345\274\217", 0));
        west->setText(QApplication::translate("MainWindow", "\350\245\277\345\274\217", 0));
        JP->setText(QApplication::translate("MainWindow", "\346\227\245\345\274\217", 0));
        Kor->setText(QApplication::translate("MainWindow", "\351\237\223\345\274\217", 0));
        name->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", 0));
        serious->setText(QApplication::translate("MainWindow", "\346\210\221\346\234\211\350\252\215\347\234\237\345\257\253\345\225\217\345\215\267", 0));
        Enter->setText(QApplication::translate("MainWindow", "Enter", 0));
        name_2->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        name_3->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        Profession_2->setText(QApplication::translate("MainWindow", "\350\201\267\346\245\255", 0));
        name_4->setText(QApplication::translate("MainWindow", "\344\270\273\351\243\237", 0));
        name_6->setText(QApplication::translate("MainWindow", "\346\226\231\347\220\206", 0));
        Load->setText(QApplication::translate("MainWindow", "Load", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\227\251\351\244\220", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\344\270\255\351\244\220", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\231\232\351\244\220", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Sun", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Mon", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Tue", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Wed", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Thu", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Fri", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Sat", 0));

        const bool __sortingEnabled1 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled1);

        name_5->setText(QApplication::translate("MainWindow", "\347\224\250\351\244\220\346\231\202\351\226\223(\350\253\213\351\273\236\346\223\212\345\213\276\351\201\270)\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
