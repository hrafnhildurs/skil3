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

private slots:

    void on_button_add_scientist_clicked();

    void on_button_add_computer_clicked();

    void on_button_filterProg_clicked();

    void on_button_filterComp_clicked();

    void on_text_search_textChanged(const QString &arg1);

private:
    void on_button_View_clicked();

    void displayAllProgrammers();
    void displayProgrammers(vector<person> programmers);
    void displaySearchProg(vector<person> programmers);

    void displayAllComputers();
    void displayComputers(vector<computer> computers);
    void displaySearchComp(vector<computer> computers);

    Manager manager;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
