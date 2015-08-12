#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_choose_profession_currentRowChanged(int currentRow);

    void on_Enter_clicked();

    //void on_horizontalSlider_sliderMoved(int position);

    void on_male_clicked();

    void on_female_clicked();

    void on_rice_clicked();

    void on_noodle_clicked();

    void on_noodle_2_clicked();

    void on_serious_clicked();

    void on_east_clicked();

    void on_west_clicked();

    void on_JP_clicked();

    void on_Kor_clicked();

    void on_choose_profession_currentRowChanged(int currentRow);

    void on_type_name_cursorPositionChanged();

    void on_Load_clicked();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    QTextCodec *codec ;
};

#endif // MAINWINDOW_H
