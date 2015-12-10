#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAllProgrammers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllProgrammers()
{
    vector<person> programmers = manager.asInserted();
    displayProgrammers(programmers);
}

void MainWindow::displayProgrammers(vector<person> programmers)
{
    ui->list_programmers->clear();

    for(unsigned int i = 0; i < programmers.size(); i++)
    {
        person currentPerson = programmers[i];

        ui->list_programmers->addItem(QString::fromStdString(currentPerson.returnName()));
    }
}
