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

    //dropdown menu for sort programmers
    ui->combo_programmers->addItem("Name");
    ui->combo_programmers->addItem("Birth year");
    ui->radioProgAsc->setChecked(true);

    //dropdown menu for sort computers
    ui->combo_computers->addItem("Name");
    ui->combo_computers->addItem("Year");
    ui->radioCompAsc->setChecked(true);

    //dropdown menu for search options
    ui->combo_search->addItem("Scientists");
    ui->combo_search->addItem("Computers");

    //dropdown menu for sort add relation
    ui->combo_addRelationSortProg->addItem("Ascending");
    ui->combo_addRelationSortProg->addItem("Descending");

    ui->combo_addRelationSortComp->addItem("Ascending");
    ui->combo_addRelationSortComp->addItem("Descending");


    //fixed window size
    setFixedSize(620,600);
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
    ui->table_programmers->clearContents();
    ui->table_programmers->setRowCount(programmers.size());
    displaySearchProg(programmers);

    for(unsigned int row = 0; row < programmers.size(); row++)
    {
        person currentPerson = programmers[row];

        QString name = QString::fromStdString(currentPerson.returnName());
        QString gender = QString::fromStdString(currentPerson.returnSex());
        QString birthyear = QString::number(currentPerson.returnBirthYear());
        QString deathyear = QString::number(currentPerson.returnDeathYear());

        ui->table_programmers->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_programmers->setItem(row, 1, new QTableWidgetItem(gender));
        ui->table_programmers->setItem(row, 2, new QTableWidgetItem(birthyear));
        ui->table_programmers->setItem(row, 3, new QTableWidgetItem(deathyear));
    }
    ui->table_realation_person->clearContents();
    ui->table_realation_person->setRowCount(programmers.size());

    for(unsigned int rowi = 0; rowi < programmers.size(); rowi++)
    {
        person currentPerson = programmers[rowi];

        QString pname = QString::fromStdString(currentPerson.returnName());

        ui->table_realation_person->setItem(rowi, 0, new QTableWidgetItem(pname));

    }
}
void MainWindow::displayComputers(vector<computer> computers)
{
    ui->table_computers->clearContents();
    ui->table_computers->setRowCount(computers.size());

    for(unsigned int row = 0; row < computers.size(); row++)
    {
        computer currentComputer = computers[row];

        QString name = QString::fromStdString(currentComputer.returnComName());
        QString year = QString::number(currentComputer.returnComYear());
        QString type = QString::fromStdString(currentComputer.returnComType());
        QString built = QString::fromStdString(currentComputer.returnComBuilt());

        ui->table_computers->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_computers->setItem(row, 1, new QTableWidgetItem(year));
        ui->table_computers->setItem(row, 2, new QTableWidgetItem(type));
        ui->table_computers->setItem(row, 3, new QTableWidgetItem(built));
    }
    ui->table_realation_computers->clearContents();
    ui->table_realation_computers->setRowCount(computers.size());

    for(unsigned int rowi = 0; rowi < computers.size(); rowi++)
    {
        computer currentComputer = computers[rowi];

        QString cname = QString::fromStdString(currentComputer.returnComName());

        ui->table_realation_computers->setItem(rowi, 0, new QTableWidgetItem(cname));

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

void MainWindow::on_button_filterProg_clicked()
{
    QString currentSort = ui->combo_programmers->currentText();
        bool ascChecked = ui->radioProgAsc->isChecked();
        bool descChecked = ui->radioProgDesc->isChecked();

        if(currentSort == "Name" && ascChecked)
        {
            vector<person> programmers = manager.alphabeticSortAsc();
            displayProgrammers(programmers);
        }
        else if(currentSort == "Name" && descChecked)
        {
            vector<person> programmers = manager.alphabeticSortDes();
            displayProgrammers(programmers);
        }
        else if(currentSort == "Birth year" && ascChecked)
        {
            vector<person> programmers = manager.birthYearSort();
            displayProgrammers(programmers);
        }
        else if(currentSort == "Birth year" && descChecked)
        {
            vector<person> programmers = manager.birthYearSortDesc();
            displayProgrammers(programmers);
        }
}

void MainWindow::on_button_filterComp_clicked()
{
    QString currentSort = ui->combo_computers->currentText();
        bool ascCheked = ui->radioCompAsc->isChecked();
        bool descCheked = ui->radioCompDesc->isChecked();

        if(currentSort == "Name" && ascCheked)
        {
            vector<computer> computers = manager.computerSortAsc();
            displayComputers(computers);
        }
        else if(currentSort == "Name" && descCheked)
        {
            vector<computer> computers = manager.computerSortDesc();
            displayComputers(computers);
        }
        else if(currentSort == "Year" && ascCheked)
        {
            vector<computer> computers = manager.computerSortYear();
            displayComputers(computers);
        }
        else if(currentSort == "Year" && descCheked)
        {
            vector<computer> computers = manager.computerSortYearDesc();
            displayComputers(computers);
        }
}

void MainWindow::displaySearchProg(vector<person> programmers)
{
    ui->list_search->clear();

    for(unsigned int i = 0; i < programmers.size(); i++)
    {
        person currentPerson = programmers[i];

        ui->list_search->addItem(QString::fromStdString(currentPerson.returnName()));
    }
}

void MainWindow::displaySearchComp(vector<computer> computers)
{
    ui->list_search->clear();

    for(unsigned int i = 0; i < computers.size(); i++)
    {
        computer currentComputer = computers[i];

        ui->list_search->addItem(QString::fromStdString(currentComputer.returnComName()));
    }
}

void MainWindow::displaySearchCompRelation(vector<computer> computers)
{
    ui->table_realation_computers->clearContents();
    ui->table_realation_computers->setRowCount(computers.size());

    for(unsigned int rowi = 0; rowi < computers.size(); rowi++)
    {
        computer currentComputer = computers[rowi];

        QString cname = QString::fromStdString(currentComputer.returnComName());

        ui->table_realation_computers->setItem(rowi, 0, new QTableWidgetItem(cname));

    }
}

void MainWindow::displaySearchProgRelation(vector<person> programmers)
{
    ui->table_realation_person->clearContents();
    ui->table_realation_person->setRowCount(programmers.size());

    for(unsigned int rowi = 0; rowi < programmers.size(); rowi++)
    {
        person currentPerson = programmers[rowi];

        QString pname = QString::fromStdString(currentPerson.returnName());

        ui->table_realation_person->setItem(rowi, 0, new QTableWidgetItem(pname));

    }
}

void MainWindow::on_text_search_textChanged()
{
    QString currentSort = ui->combo_search->currentText();
    QString currentWord = ui->text_search->text();

    if(currentSort == "Scientists")
    {
        vector<person> programmers = manager.search(currentWord.toStdString());
        displaySearchProg(programmers);
    }
    else if(currentSort == "Computers")
    {
        vector<computer> computers = manager.searchComp(currentWord.toStdString());
        displaySearchComp(computers);
    }
}

void MainWindow::on_input_searchProg_textChanged()
{
    QString currentWord = ui->input_searchProg->text();
    vector<person> programmers = manager.search(currentWord.toStdString());
    displaySearchProgRelation(programmers);
}

void MainWindow::on_input_searchComp_textChanged()
{
    QString currentWord = ui->input_searchComp->text();
    vector<computer> computers = manager.searchComp(currentWord.toStdString());
    displaySearchCompRelation(computers);
}

void MainWindow::on_combo_addRelationSortProg_currentIndexChanged()
{
    QString currentText = ui->combo_addRelationSortProg->currentText();

    if(currentText == "Ascending")
    {
        vector<person> programmers = manager.alphabeticSortAsc();
        displayProgrammers(programmers);
    }
    else
    {
        vector<person> programmers = manager.alphabeticSortDes();
        displayProgrammers(programmers);
    }
}

void MainWindow::on_combo_addRelationSortComp_currentIndexChanged()
{

    QString currentText = ui->combo_addRelationSortComp->currentText();

    if(currentText == "Ascending")
    {
        vector<computer> computers = manager.computerSortAsc();
        displayComputers(computers);
    }
    else
    {
        vector<computer> computers = manager.computerSortDesc();
        displayComputers(computers);
    }
}

void MainWindow::on_combo_search_currentIndexChanged()
{
    QString currentType = ui->combo_search->currentText();
    if(currentType == "Scientists")
    {
        vector<person> programmers = manager.asInserted();
        displaySearchProg(programmers);
    }
    else if(currentType == "Computers")
    {
        vector<computer> computers = manager.computerAsInserted();
        displaySearchComp(computers);
    }
}
