#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRegExp>
#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAllProgrammers();
    displayAllComputers();

    //dropdown menu for computer types
    ui->dropdown_computer_type->addItem("");
    ui->dropdown_computer_type->addItem("Electronic");
    ui->dropdown_computer_type->addItem("Electromechanical");
    ui->dropdown_computer_type->addItem("Mechanical");
    ui->dropdown_computer_type->addItem("PC");
    ui->dropdown_computer_type->addItem("Transistorized");
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
void MainWindow::displayAllComputers()
{
    vector<computer> computers = manager.computerAsInserted();
    displayComputers(computers);
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
void MainWindow::displayComputers(vector<computer> computers)
{
    ui->list_computers->clear();

    for(unsigned int i = 0; i < computers.size(); i++)
    {
        computer currentComputer = computers[i];

        ui->list_computers->addItem(QString::fromStdString(currentComputer.returnComName()));
    }
}

void MainWindow::on_button_add_scientist_clicked()
{
    ui->label_scientist_error->setText("");

    QRegExp rx("^([A-Za-z. ])*");

    QString name = ui->input_scientist_name->text();
    QString yearBorn = ui->input_scientist_birth->text();
    QString yearDied = ui->input_scientist_death->text();
    QString sex;

    bool error = false;

    if(name.isEmpty())
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Input name!</span>");
        error = true;
    }
    if(yearBorn.isEmpty())
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Input birthyear!</span>");
        error = true;
    }
    if(yearBorn.length() != 4 || !yearBorn.toInt())
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Invalid birthyear!</span>");
        error = true;
    }
    if(!rx.exactMatch(name))
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Invalid name!</span>");
        error = true;
    }
    if(error)
    {
        return;
    }



    bool checked_sex_button = false;
    if(ui->button_scientist_male->isChecked())
    {
         sex = "Male";
         checked_sex_button = true;
    }
    else if(ui->button_scientist_female->isChecked())
    {
         sex = "Female";
         checked_sex_button = true;
    }
    if(!checked_sex_button)
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Select gender!</span>");
        return;
    }

    bool success = false;

    if(yearDied == "")
    {
        manager.addPersonAlive(name.toStdString(),sex.toStdString(),yearBorn.toInt());
        success = true;
    }
    else if(yearDied != "")
    {
        if(yearDied.length() != 4 || !yearDied.toInt())
        {
            ui->label_scientist_error->setText("<span style='color: #ff0000'>Invalid deathyear!</span>");
            return;
        }
        else
        {
        manager.addPersonDead(name.toStdString(),sex.toStdString(),yearBorn.toInt(),yearDied.toInt());
        success = true;
        }
    }

    if(success)
    {
        ui->input_scientist_name->setText("");
        ui->input_scientist_birth->setText("");
        ui->input_scientist_death->setText("");
        ui->button_scientist_female->setAutoExclusive(false);
        ui->button_scientist_female->setChecked(false);
        ui->button_scientist_male->setChecked(false);
        displayAllProgrammers();
    }
    else
    {
        ui->label_scientist_error->setText("<span style='color: #ff0000'>Add failed!</span>");
    }

}

void MainWindow::on_button_add_computer_clicked()
{
    ui->label_computer_error->setText("");

    QString name = ui->input_computer_name->text();
    QString year = ui->input_computer_year->text();
    QString type = ui->dropdown_computer_type->currentText();
    QString was_built = "";

    bool isError = false;

    if(name.isEmpty())
    {
        ui->label_computer_error->setText("<span style='color: #ff0000'>Input name!</span>");
        isError = true;
    }
    if(year.isEmpty())
    {
        ui->label_computer_error->setText("<span style='color: #ff0000'>Input year!</span>");
        isError = true;
    }
    if(type.isEmpty())
    {
        ui->label_computer_error->setText("<span style='color: #ff0000'>Select type!</span>");
        isError = true;
    }
    if(!year.toInt() || year.length() != 4)
    {
        ui->label_computer_error->setText("<span style='color: #ff0000'>Invalid year!</span>");
        isError = true;
    }
    if(isError)
    {
        return;
    }

    bool was_built_checked = false;

    if(ui->radioButton_computer_built_yes->isChecked())
    {
        was_built = "yes";
        was_built_checked = true;
    }
    else if(ui->radioButton_computer_built_no->isChecked())
    {
        was_built = "no";
        was_built_checked = true;
    }

    if(!was_built_checked)
    {
        ui->label_computer_error->setText("<span style='color: #ff0000'>Check if computer was built!</span>");
        return;
    }


    manager.addComputer(name.toStdString(),year.toInt(),type.toStdString(),was_built.toStdString());

    displayAllComputers();

    ui->input_computer_name->setText("");
    ui->input_computer_year->setText("");
    ui->dropdown_computer_type->setCurrentIndex(0);
    ui->radioButton_computer_built_yes->setAutoExclusive(false);
    ui->radioButton_computer_built_yes->setChecked(false);
    ui->radioButton_computer_built_no->setChecked(false);


}
