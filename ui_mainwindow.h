/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QPushButton *button_remove_scientist;
    QLabel *label_5;
    QTableWidget *table_programmers;
    QGroupBox *groupBox_6;
    QLabel *label_scientist_name;
    QLabel *label_scientist_birth;
    QLabel *label_scientist_death;
    QLineEdit *input_scientist_name;
    QLineEdit *input_scientist_birth;
    QLineEdit *input_scientist_death;
    QPushButton *button_add_scientist;
    QRadioButton *button_scientist_male;
    QRadioButton *button_scientist_female;
    QLabel *label_scientist_error;
    QLabel *label_2;
    QWidget *tab_6;
    QLabel *label_9;
    QPushButton *button_remove_computer;
    QTableWidget *table_computers;
    QGroupBox *groupBox_8;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *input_computer_name;
    QLineEdit *input_computer_year;
    QPushButton *button_add_computer;
    QComboBox *dropdown_computer_type;
    QLabel *label_10;
    QRadioButton *radioButton_computer_built_yes;
    QRadioButton *radioButton_computer_built_no;
    QLabel *label;
    QLabel *label_computer_error;
    QWidget *tab;
    QTableWidget *table_relations;
    QGroupBox *groupBox;
    QLineEdit *input_relationSearch;
    QGroupBox *groupBox_2;
    QPushButton *button_remove_relation;
    QLabel *label_remove_relation;
    QWidget *tab_7;
    QPushButton *button_add_relations;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QTableWidget *table_realation_person;
    QTableWidget *table_realation_computers;
    QGroupBox *groupBox_3;
    QLineEdit *input_searchProg;
    QLabel *label_13;
    QLineEdit *input_searchComp;
    QLabel *label_14;
    QWidget *tab_8;
    QGroupBox *groupBox_12;
    QLabel *label_16;
    QLineEdit *text_search;
    QGroupBox *groupBox_13;
    QComboBox *combo_search;
    QLabel *label_17;
    QTableWidget *table_search;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(607, 624);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        button_remove_scientist = new QPushButton(tab_5);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setEnabled(false);
        button_remove_scientist->setGeometry(QRect(10, 490, 81, 23));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 470, 311, 16));
        table_programmers = new QTableWidget(tab_5);
        if (table_programmers->columnCount() < 4)
            table_programmers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_programmers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_programmers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_programmers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_programmers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_programmers->setObjectName(QStringLiteral("table_programmers"));
        table_programmers->setGeometry(QRect(10, 140, 571, 321));
        table_programmers->setShowGrid(false);
        table_programmers->setSortingEnabled(true);
        table_programmers->horizontalHeader()->setDefaultSectionSize(132);
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 571, 121));
        label_scientist_name = new QLabel(groupBox_6);
        label_scientist_name->setObjectName(QStringLiteral("label_scientist_name"));
        label_scientist_name->setGeometry(QRect(10, 30, 41, 16));
        label_scientist_birth = new QLabel(groupBox_6);
        label_scientist_birth->setObjectName(QStringLiteral("label_scientist_birth"));
        label_scientist_birth->setGeometry(QRect(350, 30, 41, 16));
        label_scientist_death = new QLabel(groupBox_6);
        label_scientist_death->setObjectName(QStringLiteral("label_scientist_death"));
        label_scientist_death->setGeometry(QRect(350, 60, 41, 16));
        input_scientist_name = new QLineEdit(groupBox_6);
        input_scientist_name->setObjectName(QStringLiteral("input_scientist_name"));
        input_scientist_name->setGeometry(QRect(50, 30, 281, 20));
        input_scientist_birth = new QLineEdit(groupBox_6);
        input_scientist_birth->setObjectName(QStringLiteral("input_scientist_birth"));
        input_scientist_birth->setGeometry(QRect(390, 30, 171, 20));
        input_scientist_death = new QLineEdit(groupBox_6);
        input_scientist_death->setObjectName(QStringLiteral("input_scientist_death"));
        input_scientist_death->setGeometry(QRect(390, 60, 171, 20));
        button_add_scientist = new QPushButton(groupBox_6);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));
        button_add_scientist->setGeometry(QRect(480, 90, 81, 23));
        button_scientist_male = new QRadioButton(groupBox_6);
        button_scientist_male->setObjectName(QStringLiteral("button_scientist_male"));
        button_scientist_male->setGeometry(QRect(80, 60, 61, 17));
        button_scientist_female = new QRadioButton(groupBox_6);
        button_scientist_female->setObjectName(QStringLiteral("button_scientist_female"));
        button_scientist_female->setGeometry(QRect(140, 60, 61, 17));
        label_scientist_error = new QLabel(groupBox_6);
        label_scientist_error->setObjectName(QStringLiteral("label_scientist_error"));
        label_scientist_error->setGeometry(QRect(120, 80, 211, 31));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 47, 16));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_9 = new QLabel(tab_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 470, 311, 16));
        button_remove_computer = new QPushButton(tab_6);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);
        button_remove_computer->setGeometry(QRect(10, 490, 81, 23));
        table_computers = new QTableWidget(tab_6);
        if (table_computers->columnCount() < 4)
            table_computers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->setGeometry(QRect(10, 140, 571, 321));
        table_computers->setShowGrid(false);
        table_computers->setSortingEnabled(true);
        table_computers->horizontalHeader()->setDefaultSectionSize(132);
        groupBox_8 = new QGroupBox(tab_6);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 571, 121));
        label_6 = new QLabel(groupBox_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 47, 16));
        label_7 = new QLabel(groupBox_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 47, 16));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 30, 47, 16));
        input_computer_name = new QLineEdit(groupBox_8);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(50, 30, 271, 20));
        input_computer_year = new QLineEdit(groupBox_8);
        input_computer_year->setObjectName(QStringLiteral("input_computer_year"));
        input_computer_year->setGeometry(QRect(50, 60, 271, 20));
        button_add_computer = new QPushButton(groupBox_8);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));
        button_add_computer->setGeometry(QRect(480, 90, 81, 23));
        dropdown_computer_type = new QComboBox(groupBox_8);
        dropdown_computer_type->setObjectName(QStringLiteral("dropdown_computer_type"));
        dropdown_computer_type->setGeometry(QRect(390, 30, 171, 22));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(350, 60, 61, 21));
        radioButton_computer_built_yes = new QRadioButton(groupBox_8);
        radioButton_computer_built_yes->setObjectName(QStringLiteral("radioButton_computer_built_yes"));
        radioButton_computer_built_yes->setGeometry(QRect(450, 60, 41, 21));
        radioButton_computer_built_no = new QRadioButton(groupBox_8);
        radioButton_computer_built_no->setObjectName(QStringLiteral("radioButton_computer_built_no"));
        radioButton_computer_built_no->setGeometry(QRect(510, 60, 41, 21));
        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 90, 231, 20));
        label_computer_error = new QLabel(groupBox_8);
        label_computer_error->setObjectName(QStringLiteral("label_computer_error"));
        label_computer_error->setGeometry(QRect(120, 90, 251, 21));
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        table_relations = new QTableWidget(tab);
        if (table_relations->columnCount() < 2)
            table_relations->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_relations->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_relations->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        table_relations->setObjectName(QStringLiteral("table_relations"));
        table_relations->setGeometry(QRect(10, 70, 571, 391));
        table_relations->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_relations->setSortingEnabled(true);
        table_relations->horizontalHeader()->setCascadingSectionResizes(true);
        table_relations->horizontalHeader()->setDefaultSectionSize(270);
        table_relations->horizontalHeader()->setStretchLastSection(true);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 571, 51));
        input_relationSearch = new QLineEdit(groupBox);
        input_relationSearch->setObjectName(QStringLiteral("input_relationSearch"));
        input_relationSearch->setGeometry(QRect(10, 20, 321, 20));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(-10, 460, 601, 101));
        button_remove_relation = new QPushButton(groupBox_2);
        button_remove_relation->setObjectName(QStringLiteral("button_remove_relation"));
        button_remove_relation->setEnabled(false);
        button_remove_relation->setGeometry(QRect(20, 30, 81, 23));
        label_remove_relation = new QLabel(groupBox_2);
        label_remove_relation->setObjectName(QStringLiteral("label_remove_relation"));
        label_remove_relation->setGeometry(QRect(20, 10, 341, 16));
        tabWidget->addTab(tab, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        button_add_relations = new QPushButton(tab_7);
        button_add_relations->setObjectName(QStringLiteral("button_add_relations"));
        button_add_relations->setEnabled(false);
        button_add_relations->setGeometry(QRect(440, 490, 141, 23));
        label_11 = new QLabel(tab_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 47, 13));
        label_12 = new QLabel(tab_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(310, 70, 47, 13));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(420, 470, 161, 16));
        table_realation_person = new QTableWidget(tab_7);
        if (table_realation_person->columnCount() < 2)
            table_realation_person->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_realation_person->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_realation_person->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        table_realation_person->setObjectName(QStringLiteral("table_realation_person"));
        table_realation_person->setGeometry(QRect(10, 90, 281, 371));
        table_realation_person->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_realation_person->setShowGrid(false);
        table_realation_person->setSortingEnabled(true);
        table_realation_person->horizontalHeader()->setDefaultSectionSize(50);
        table_realation_person->horizontalHeader()->setStretchLastSection(true);
        table_realation_person->verticalHeader()->setVisible(false);
        table_realation_computers = new QTableWidget(tab_7);
        if (table_realation_computers->columnCount() < 2)
            table_realation_computers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_realation_computers->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_realation_computers->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        table_realation_computers->setObjectName(QStringLiteral("table_realation_computers"));
        table_realation_computers->setGeometry(QRect(310, 90, 271, 371));
        table_realation_computers->setAutoFillBackground(false);
        table_realation_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_realation_computers->setShowGrid(false);
        table_realation_computers->setSortingEnabled(true);
        table_realation_computers->horizontalHeader()->setDefaultSectionSize(50);
        table_realation_computers->horizontalHeader()->setStretchLastSection(true);
        table_realation_computers->verticalHeader()->setVisible(false);
        groupBox_3 = new QGroupBox(tab_7);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 571, 51));
        input_searchProg = new QLineEdit(groupBox_3);
        input_searchProg->setObjectName(QStringLiteral("input_searchProg"));
        input_searchProg->setGeometry(QRect(80, 20, 191, 20));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 71, 21));
        input_searchComp = new QLineEdit(groupBox_3);
        input_searchComp->setObjectName(QStringLiteral("input_searchComp"));
        input_searchComp->setGeometry(QRect(370, 20, 191, 20));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(300, 20, 71, 21));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_12 = new QGroupBox(tab_8);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(8, 10, 301, 71));
        label_16 = new QLabel(groupBox_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 30, 47, 13));
        text_search = new QLineEdit(groupBox_12);
        text_search->setObjectName(QStringLiteral("text_search"));
        text_search->setGeometry(QRect(50, 30, 241, 20));
        groupBox_13 = new QGroupBox(tab_8);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(320, 10, 261, 71));
        combo_search = new QComboBox(groupBox_13);
        combo_search->setObjectName(QStringLiteral("combo_search"));
        combo_search->setGeometry(QRect(120, 30, 121, 22));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 30, 111, 16));
        table_search = new QTableWidget(tab_8);
        if (table_search->columnCount() < 4)
            table_search->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table_search->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_search->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table_search->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table_search->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        table_search->setObjectName(QStringLiteral("table_search"));
        table_search->setGeometry(QRect(10, 90, 571, 431));
        table_search->setShowGrid(false);
        table_search->horizontalHeader()->setVisible(false);
        table_search->horizontalHeader()->setDefaultSectionSize(137);
        table_search->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_8, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button_remove_scientist->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_5->setText(QApplication::translate("MainWindow", "Seletect a Scientist to remove from database and push remove", 0));
        QTableWidgetItem *___qtablewidgetitem = table_programmers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_programmers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_programmers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Birth year", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_programmers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Death year", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Add Scientist", 0));
        label_scientist_name->setText(QApplication::translate("MainWindow", "Name: ", 0));
        label_scientist_birth->setText(QApplication::translate("MainWindow", "Birth:", 0));
        label_scientist_death->setText(QApplication::translate("MainWindow", "Death: ", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add", 0));
        button_scientist_male->setText(QApplication::translate("MainWindow", "Male", 0));
        button_scientist_female->setText(QApplication::translate("MainWindow", "Female", 0));
        label_scientist_error->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Gender:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Scientists", 0));
        label_9->setText(QApplication::translate("MainWindow", "Seletect a computer to remove from database and push remove", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Year", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Was i built", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Add Computers", 0));
        label_6->setText(QApplication::translate("MainWindow", "Name: ", 0));
        label_7->setText(QApplication::translate("MainWindow", "Year", 0));
        label_8->setText(QApplication::translate("MainWindow", "Type", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add", 0));
        label_10->setText(QApplication::translate("MainWindow", "Was it built ?", 0));
        radioButton_computer_built_yes->setText(QApplication::translate("MainWindow", "Yes", 0));
        radioButton_computer_built_no->setText(QApplication::translate("MainWindow", "No", 0));
        label->setText(QString());
        label_computer_error->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Computers", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_relations->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Scientist Name", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_relations->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Computer Name", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Search", 0));
        groupBox_2->setTitle(QString());
        button_remove_relation->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_remove_relation->setText(QApplication::translate("MainWindow", "Select a row you want to remove from database and push remove", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Relations", 0));
        button_add_relations->setText(QApplication::translate("MainWindow", "Add relation", 0));
        label_11->setText(QApplication::translate("MainWindow", "Scientists", 0));
        label_12->setText(QApplication::translate("MainWindow", "Comptuers", 0));
        label_15->setText(QApplication::translate("MainWindow", "Select what you want to connect", 0));
        QTableWidgetItem *___qtablewidgetitem10 = table_realation_person->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem11 = table_realation_person->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem12 = table_realation_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem13 = table_realation_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Name", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Search", 0));
        label_13->setText(QApplication::translate("MainWindow", "In scientists", 0));
        label_14->setText(QApplication::translate("MainWindow", "In computers", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Add relations", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Search in database", 0));
        label_16->setText(QApplication::translate("MainWindow", "Search:", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        label_17->setText(QApplication::translate("MainWindow", "Scientist or computer:", 0));
        QTableWidgetItem *___qtablewidgetitem14 = table_search->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem15 = table_search->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Gender/Year", 0));
        QTableWidgetItem *___qtablewidgetitem16 = table_search->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Birth year/Type", 0));
        QTableWidgetItem *___qtablewidgetitem17 = table_search->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Death year/Was it built", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
