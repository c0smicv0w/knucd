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
    void on_pushButton_clicked();

    void on_menu1_clicked();

    void on_menu2_clicked();

    void on_menu3_clicked();

    void on_menu4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
