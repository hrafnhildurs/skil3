#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
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

//    void on_button_filterProg_clicked();

//    void on_button_filterComp_clicked();

    void on_text_search_textChanged();

    void on_input_searchProg_textChanged();

    void on_input_searchComp_textChanged();

    void on_combo_search_currentIndexChanged();

    void on_table_programmers_cellClicked(int row, int column);

    void on_button_remove_scientist_clicked();

    void on_table_computers_cellClicked(int row, int column);

    void on_button_remove_computer_clicked();

    void on_table_relations_cellClicked(int row, int column);

    void on_button_remove_relation_clicked();

    void on_table_realation_person_clicked();

    void on_table_realation_computers_clicked();

    void on_button_add_relations_clicked();

    void on_table_programmers_itemDoubleClicked(QTableWidgetItem *item);
    
    void on_input_relationSearch_textChanged();

    void showTime();

private:
    void on_button_View_clicked();

    void displayAllProgrammers();
    void displayProgrammers(vector<person> programmers);
    void displaySearchProg(vector<person> programmers);
    void displaySearchProgRelation(vector<person> programmers);

    void displayAllComputers();
    void displayComputers(vector<computer> computers);
    void displaySearchComp(vector<computer> computers);
    void displaySearchCompRelation(vector<computer> computers);

    void displayAllRelations();
    void displayRelations(vector<relations> relation);
    void displaySearchRelation(vector<relations> relation);

    Manager manager;

    vector<person> currentlyDisplayedScientist;
    vector<computer> currentlyDisplayedComputer;
    vector<relations> currentlyDisplayedRelation;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
