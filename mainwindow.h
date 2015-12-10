#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "manager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void on_button_View_clicked();

    void displayAllProgrammers();
    void displayProgrammers(vector<person> programmers);
    Manager manager;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
