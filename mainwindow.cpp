#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include <QFile>
#include <QTextstream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    codec = QTextCodec::codecForName("Big5");

}

MainWindow::~MainWindow()
{
    delete ui;
}

int sex_status;
int main_status;
int cuisine;
int value = 0;

void MainWindow::on_Enter_clicked()
{
    ui->show_name->append(ui->type_name->toPlainText());

    QFile nfile("name.txt");
    if(nfile.open(QFile::Append|QFile::Text))
    {
        QTextStream out(&nfile);
        out << ui->type_name->toPlainText() << endl;
    }

    ui->show_profession->append(ui-> choose_profession ->currentItem()->text());

    QFile jfile("job.txt");
    if(jfile.open(QFile::Append|QFile::Text))
    {
        QTextStream out(&jfile);
        out << ui-> choose_profession ->currentItem()->text() << endl;
    }

    if(sex_status == 1)
    {
        ui->show_sex->append(codec->toUnicode("男"));
        QFile sfile("sex.txt");
        if(sfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&sfile);
            out << codec->toUnicode("男") << endl;
        }

    }

    if(sex_status == 2)
    {
        ui->show_sex->append(codec->toUnicode("女"));
        QFile sfile("sex.txt");
        if(sfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&sfile);
            out << codec->toUnicode("女") << endl;
        }
    }

    if(main_status == 1)
    {
        ui->show_main_food->append(codec->toUnicode("飯"));
        QFile mfile("main food.txt");
        if(mfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&mfile);
            out << codec->toUnicode("飯") << endl;
        }
    }

    if(main_status == 2)
    {
        ui->show_main_food->append(codec->toUnicode("麵"));
        QFile mfile("main food.txt");
        if(mfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&mfile);
            out << codec->toUnicode("麵") << endl;
        }
    }

    if(main_status == 3)
    {
        ui->show_main_food->append(codec->toUnicode("冬粉"));
        QFile mfile("main food.txt");
        if(mfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&mfile);
            out << codec->toUnicode("冬粉") << endl;
        }
    }

    if(cuisine == 1)
    {
        ui->show_cuisine->append(codec->toUnicode("中式"));
        QFile cfile("cuisine.txt");
        if(cfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&cfile);
            out << codec->toUnicode("中式") << endl;
        }
    }
    if(cuisine == 2)
    {
        ui->show_cuisine->append(codec->toUnicode("西式"));
        QFile cfile("cuisine.txt");
        if(cfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&cfile);
            out << codec->toUnicode("西式") << endl;
        }
    }
    if(cuisine == 3)
    {
        ui->show_cuisine->append(codec->toUnicode("日式"));
        QFile cfile("cuisine.txt");
        if(cfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&cfile);
            out << codec->toUnicode("日式") << endl;
        }
    }
    if(cuisine == 4)
    {
        ui->show_cuisine->append(codec->toUnicode("韓式"));
        QFile cfile("cuisine.txt");
        if(cfile.open(QFile::Append|QFile::Text))
        {
            QTextStream out(&cfile);
            out << codec->toUnicode("韓式") << endl;
        }
    }

}

void MainWindow::on_male_clicked()
{
    sex_status = 1;
    value = 40;
    ui->progressBar->setValue(value);
}

void MainWindow::on_female_clicked()
{
    sex_status = 2;
    value = 40;
    ui->progressBar->setValue(value);
}

void MainWindow::on_rice_clicked()
{
    main_status = 1;
    value = 80;
    ui->progressBar->setValue(value);

}

void MainWindow::on_noodle_clicked()
{
    main_status = 2;
    value = 80;
    ui->progressBar->setValue(value);
}

void MainWindow::on_noodle_2_clicked()
{
    main_status = 3;
    value = 80;
    ui->progressBar->setValue(value);
}

void MainWindow::on_serious_clicked()
{
    if(ui->serious->isChecked() == 1)
    {
        ui->Enter->setEnabled(true);
    }
    if(ui->serious->isChecked() == 0)
    {
        ui->Enter->setEnabled(false);
    }
}

void MainWindow::on_east_clicked()
{
    cuisine = 1;
    value = 100;
    ui->progressBar->setValue(value);
}

void MainWindow::on_west_clicked()
{
    cuisine = 2;
    value = 100;
    ui->progressBar->setValue(value);
}

void MainWindow::on_JP_clicked()
{
    cuisine = 3;
    value = 100;
    ui->progressBar->setValue(value);
}

void MainWindow::on_Kor_clicked()
{
    cuisine = 4;
    value = 100;
    ui->progressBar->setValue(value);
}

void MainWindow::on_choose_profession_currentRowChanged(int )
{
    value = 60;
    ui->progressBar->setValue(value);
}

void MainWindow::on_type_name_cursorPositionChanged()
{
    value = 20;
    ui->progressBar->setValue(value);

}

void MainWindow::on_Load_clicked()
{
    QFile nfile("name.txt");

    if(nfile.open(QIODevice::ReadOnly))
    {
        QString nline;
        QTextStream in(&nfile);
        while(!in.atEnd())
        {
            nline = in.readLine();
            ui->show_name->append(nline);
        }
    }

    QFile sfile("sex.txt");

    if(sfile.open(QIODevice::ReadOnly))
    {
        QString sline;
        QTextStream in(&sfile);
        while(!in.atEnd())
        {
            sline = in.readLine();
            ui->show_sex->append(sline);
        }
    }

    QFile mfile("main food.txt");

    if(mfile.open(QIODevice::ReadOnly))
    {
        QString mline;
        QTextStream in(&mfile);
        while(!in.atEnd())
        {
            mline = in.readLine();
            ui->show_main_food->append(mline);
        }
    }

    QFile jfile("job.txt");

    if(jfile.open(QIODevice::ReadOnly))
    {
        QString jline;
        QTextStream in(&jfile);
        while(!in.atEnd())
        {
            jline = in.readLine();
            ui->show_profession->append(jline);
        }
    }

    QFile cfile("cuisine.txt");

    if(cfile.open(QIODevice::ReadOnly))
    {
        QString cline;
        QTextStream in(&cfile);
        while(!in.atEnd())
        {
            cline = in.readLine();
            ui->show_cuisine->append(cline);
        }
    }

}

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    ui->tableWidget->setItem(row, column, new QTableWidgetItem(codec->toUnicode("●")));
}
