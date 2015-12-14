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
    displayAllRelations();

    //dropdown menu for computer types
    ui->dropdown_computer_type->addItem("");
    ui->dropdown_computer_type->addItem("Electronic");
    ui->dropdown_computer_type->addItem("Electromechanical");
    ui->dropdown_computer_type->addItem("Mechanical");
    ui->dropdown_computer_type->addItem("PC");
    ui->dropdown_computer_type->addItem("Transistorized");

    //dropdown menu for search options
    ui->combo_search->addItem("Scientists");
    ui->combo_search->addItem("Computers");



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
void MainWindow::displayAllRelations()
{
     vector<relations> relation = manager.relation();
     displayRelations(relation);
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
        QString pid = QString::number(currentPerson.returnId());

        ui->table_realation_person->setItem(rowi, 1, new QTableWidgetItem(pname));
        ui->table_realation_person->setItem(rowi, 0, new QTableWidgetItem(pid));

    }
    currentlyDisplayedScientist = programmers;
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
        QString cid = QString::number(currentComputer.returnId());

        ui->table_realation_computers->setItem(rowi, 1, new QTableWidgetItem(cname));
        ui->table_realation_computers->setItem(rowi, 0, new QTableWidgetItem(cid));

    }

    currentlyDisplayedComputer = computers;
}

void MainWindow::displayRelations(vector<relations> relation)
{
    ui->table_relations->clearContents();
    ui->table_relations->setRowCount(relation.size());

    for(unsigned int row = 0; row < relation.size(); row++)
    {
        relations currentRelation = relation[row];

        QString pname = QString::fromStdString(currentRelation.returnCname());
        QString cname = QString::fromStdString(currentRelation.returnPname());


        ui->table_relations->setItem(row, 0, new QTableWidgetItem(pname));
        ui->table_relations->setItem(row, 1, new QTableWidgetItem(cname));
    }
    currentlyDisplayedRelation = relation;
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
        ui->statusBar->showMessage("Successfully added scientist", 1500);

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

    ui->statusBar->showMessage("Successfully added computer", 1500);

    displayAllComputers();

    ui->input_computer_name->setText("");
    ui->input_computer_year->setText("");
    ui->dropdown_computer_type->setCurrentIndex(0);
    ui->radioButton_computer_built_yes->setAutoExclusive(false);
    ui->radioButton_computer_built_yes->setChecked(false);
    ui->radioButton_computer_built_no->setChecked(false);


}




void MainWindow::displaySearchProg(vector<person> programmers)
{
    ui->table_search->clearContents();
    ui->table_search->setRowCount(programmers.size());

    for(unsigned int row = 0; row < programmers.size(); row++)
    {
        person currentProgrammer = programmers[row];

        QString sName = QString::fromStdString(currentProgrammer.returnName());
        QString sGender = QString::fromStdString(currentProgrammer.returnSex());
        QString sByear = QString::number(currentProgrammer.returnBirthYear());
        QString sDyear = QString::number(currentProgrammer.returnDeathYear());

        ui->table_search->setItem(row, 0, new QTableWidgetItem(sName));
        ui->table_search->setItem(row, 1, new QTableWidgetItem(sGender));
        ui->table_search->setItem(row, 2, new QTableWidgetItem(sByear));
        ui->table_search->setItem(row, 3, new QTableWidgetItem(sDyear));


    }
}

void MainWindow::displaySearchComp(vector<computer> computers)
{
    ui->table_search->clearContents();
    ui->table_search->setRowCount(computers.size());

    for(unsigned int row = 0; row < computers.size(); row++)
    {
        computer currentComputer = computers[row];

        QString sName = QString::fromStdString(currentComputer.returnComName());
        QString sYear = QString::number(currentComputer.returnComYear());
        QString sType = QString::fromStdString(currentComputer.returnComType());
        QString sBuilt = QString::fromStdString(currentComputer.returnComBuilt());

        ui->table_search->setItem(row, 0, new QTableWidgetItem(sName));
        ui->table_search->setItem(row, 1, new QTableWidgetItem(sYear));
        ui->table_search->setItem(row, 2, new QTableWidgetItem(sType));
        ui->table_search->setItem(row, 3, new QTableWidgetItem(sBuilt));


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
        QString cid = QString::number(currentComputer.returnId());

        ui->table_realation_computers->setItem(rowi, 0, new QTableWidgetItem(cid));
        ui->table_realation_computers->setItem(rowi, 1, new QTableWidgetItem(cname));

    }
}

void MainWindow::displaySearchProgRelation(vector<person> programmers)
{
    ui->table_realation_person->clearContents();
    ui->table_realation_person->setRowCount(programmers.size());

    for(unsigned int rowi = 0; rowi < programmers.size(); rowi++)
    {
        person currentProgrammer = programmers[rowi];

        QString name = QString::fromStdString(currentProgrammer.returnName());
        QString id = QString::number(currentProgrammer.returnId());

        ui->table_realation_person->setItem(rowi, 1, new QTableWidgetItem(name));
        ui->table_realation_person->setItem(rowi, 0, new QTableWidgetItem(id));

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

void MainWindow::on_table_programmers_cellClicked(int row, int column)
{
    if(column == 0)
    {
        ui->button_remove_scientist->setEnabled(true);
    }
    else
    {
        ui->button_remove_scientist->setEnabled(false);
    }
}

void MainWindow::on_button_remove_scientist_clicked()
{
    int currentlySelectedScientistIndex = ui->table_programmers->currentIndex().row();

    person currentlySelectedScientist = currentlyDisplayedScientist.at(currentlySelectedScientistIndex);

    manager.deleteName(currentlySelectedScientist);

    ui->statusBar->showMessage("Successfully removed scientist", 1500);

    displayAllProgrammers();

    ui->button_remove_scientist->setEnabled(false);

}

void MainWindow::on_table_computers_cellClicked(int row, int column)
{
    if(column == 0)
    {
        ui->button_remove_computer->setEnabled(true);
    }
    else
    {
        ui->button_remove_computer->setEnabled(false);
    }
}


void MainWindow::on_button_remove_computer_clicked()
{
    int currentlySelectedComputerIndex = ui->table_computers->currentIndex().row();

    computer currentlySelectedComputer = currentlyDisplayedComputer.at(currentlySelectedComputerIndex);

    manager.deleteComputer(currentlySelectedComputer);

    ui->statusBar->showMessage("Successfully removed computer", 1500);

    displayAllComputers();

    ui->button_remove_computer->setEnabled(false);
}

void MainWindow::on_table_relations_cellClicked(int row, int column)
{
    if(column == 0)
    {
        ui->button_remove_relation->setEnabled(true);
    }
    else
    {
        ui->button_remove_relation->setEnabled(true);
    }
}

void MainWindow::on_button_remove_relation_clicked()
{
    int currentlySelectedRelationIndex = ui->table_relations->currentIndex().row();

    relations currentlySelectedRelation = currentlyDisplayedRelation.at(currentlySelectedRelationIndex);

    manager.deleteRelation(currentlySelectedRelation);

    ui->statusBar->showMessage("Successfully removed relation", 1500);

    displayAllRelations();

    ui->button_remove_scientist->setEnabled(false);
}



void MainWindow::on_table_realation_person_clicked()
{
    if (ui->table_realation_computers->currentIndex().row() != -1)
    {
        ui->pushButton_10->setEnabled(true);
    }
}

void MainWindow::on_table_realation_computers_clicked()
{
    if (ui->table_realation_person->currentIndex().row() != -1)
    {
        ui->pushButton_10->setEnabled(true);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    int computerId = ui->table_realation_computers->item(ui->table_realation_computers->currentIndex().row(), 0)->text().toInt();
    int personId = ui->table_realation_person->item(ui->table_realation_person->currentIndex().row(), 0)->text().toInt();

    manager.addRelations(personId, computerId);

    displayAllRelations();

    ui->statusBar->showMessage("Successfully added relation", 1500);
}
