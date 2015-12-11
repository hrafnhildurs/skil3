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
#include <QtWidgets/QListWidget>
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
    QPushButton *pushButton_6;
    QLabel *label_5;
    QTableWidget *table_programmers;
    QGroupBox *groupBox_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *input_scientist_name;
    QLineEdit *input_scientist_birth;
    QLineEdit *input_scientist_death;
    QPushButton *button_add_scientist;
    QRadioButton *button_scientist_male;
    QRadioButton *button_scientist_female;
    QLabel *label_scientist_error;
    QGroupBox *groupBox_7;
    QComboBox *combo_programmers;
    QRadioButton *radioProgAsc;
    QRadioButton *radioProgDesc;
    QPushButton *button_filterProg;
    QWidget *tab_6;
    QGroupBox *groupBox_9;
    QComboBox *combo_computers;
    QRadioButton *radioCompAsc;
    QRadioButton *radioCompDesc;
    QPushButton *button_filterComp;
    QLabel *label_9;
    QPushButton *pushButton_9;
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
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_14;
    QComboBox *combo_programmers_2;
    QRadioButton *radioProgAsc_2;
    QRadioButton *radioProgDesc_2;
    QPushButton *button_filterProg_2;
    QWidget *tab_7;
    QPushButton *pushButton_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_11;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_12;
    QLabel *label_15;
    QGroupBox *groupBox_10;
    QComboBox *comboBox_4;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_14;
    QGroupBox *groupBox_11;
    QComboBox *comboBox_5;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QTableWidget *table_realation_person;
    QTableWidget *table_realation_computers;
    QWidget *tab_8;
    QGroupBox *groupBox_12;
    QLabel *label_16;
    QLineEdit *text_search;
    QPushButton *button_search;
    QGroupBox *groupBox_13;
    QComboBox *combo_search;
    QLabel *label_17;
    QListWidget *list_search;
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
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 490, 81, 23));
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
        table_programmers->setGeometry(QRect(0, 170, 581, 291));
        table_programmers->setShowGrid(false);
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 10, 349, 159));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 13));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 47, 13));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 47, 13));
        input_scientist_name = new QLineEdit(groupBox_6);
        input_scientist_name->setObjectName(QStringLiteral("input_scientist_name"));
        input_scientist_name->setGeometry(QRect(50, 30, 271, 20));
        input_scientist_birth = new QLineEdit(groupBox_6);
        input_scientist_birth->setObjectName(QStringLiteral("input_scientist_birth"));
        input_scientist_birth->setGeometry(QRect(50, 60, 121, 20));
        input_scientist_death = new QLineEdit(groupBox_6);
        input_scientist_death->setObjectName(QStringLiteral("input_scientist_death"));
        input_scientist_death->setGeometry(QRect(50, 90, 121, 20));
        button_add_scientist = new QPushButton(groupBox_6);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));
        button_add_scientist->setGeometry(QRect(240, 130, 81, 23));
        button_scientist_male = new QRadioButton(groupBox_6);
        button_scientist_male->setObjectName(QStringLiteral("button_scientist_male"));
        button_scientist_male->setGeometry(QRect(190, 60, 51, 17));
        button_scientist_female = new QRadioButton(groupBox_6);
        button_scientist_female->setObjectName(QStringLiteral("button_scientist_female"));
        button_scientist_female->setGeometry(QRect(260, 60, 61, 17));
        label_scientist_error = new QLabel(groupBox_6);
        label_scientist_error->setObjectName(QStringLiteral("label_scientist_error"));
        label_scientist_error->setGeometry(QRect(10, 120, 211, 31));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(350, 10, 229, 159));
        combo_programmers = new QComboBox(groupBox_7);
        combo_programmers->setObjectName(QStringLiteral("combo_programmers"));
        combo_programmers->setGeometry(QRect(20, 30, 181, 22));
        radioProgAsc = new QRadioButton(groupBox_7);
        radioProgAsc->setObjectName(QStringLiteral("radioProgAsc"));
        radioProgAsc->setGeometry(QRect(30, 70, 71, 20));
        radioProgDesc = new QRadioButton(groupBox_7);
        radioProgDesc->setObjectName(QStringLiteral("radioProgDesc"));
        radioProgDesc->setGeometry(QRect(120, 70, 81, 21));
        button_filterProg = new QPushButton(groupBox_7);
        button_filterProg->setObjectName(QStringLiteral("button_filterProg"));
        button_filterProg->setGeometry(QRect(120, 130, 81, 23));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_9 = new QGroupBox(tab_6);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(350, 10, 229, 159));
        combo_computers = new QComboBox(groupBox_9);
        combo_computers->setObjectName(QStringLiteral("combo_computers"));
        combo_computers->setGeometry(QRect(20, 30, 181, 22));
        radioCompAsc = new QRadioButton(groupBox_9);
        radioCompAsc->setObjectName(QStringLiteral("radioCompAsc"));
        radioCompAsc->setGeometry(QRect(30, 70, 71, 20));
        radioCompDesc = new QRadioButton(groupBox_9);
        radioCompDesc->setObjectName(QStringLiteral("radioCompDesc"));
        radioCompDesc->setGeometry(QRect(120, 70, 81, 21));
        button_filterComp = new QPushButton(groupBox_9);
        button_filterComp->setObjectName(QStringLiteral("button_filterComp"));
        button_filterComp->setGeometry(QRect(120, 130, 81, 23));
        label_9 = new QLabel(tab_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 470, 311, 16));
        pushButton_9 = new QPushButton(tab_6);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 490, 81, 23));
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
        table_computers->setGeometry(QRect(0, 170, 581, 291));
        table_computers->setShowGrid(false);
        groupBox_8 = new QGroupBox(tab_6);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 10, 349, 159));
        label_6 = new QLabel(groupBox_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 47, 13));
        label_7 = new QLabel(groupBox_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 47, 13));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 90, 47, 13));
        input_computer_name = new QLineEdit(groupBox_8);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(50, 30, 271, 20));
        input_computer_year = new QLineEdit(groupBox_8);
        input_computer_year->setObjectName(QStringLiteral("input_computer_year"));
        input_computer_year->setGeometry(QRect(50, 60, 271, 20));
        button_add_computer = new QPushButton(groupBox_8);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));
        button_add_computer->setGeometry(QRect(240, 130, 81, 23));
        dropdown_computer_type = new QComboBox(groupBox_8);
        dropdown_computer_type->setObjectName(QStringLiteral("dropdown_computer_type"));
        dropdown_computer_type->setGeometry(QRect(50, 90, 111, 22));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(170, 90, 61, 16));
        radioButton_computer_built_yes = new QRadioButton(groupBox_8);
        radioButton_computer_built_yes->setObjectName(QStringLiteral("radioButton_computer_built_yes"));
        radioButton_computer_built_yes->setGeometry(QRect(240, 90, 41, 17));
        radioButton_computer_built_no = new QRadioButton(groupBox_8);
        radioButton_computer_built_no->setObjectName(QStringLiteral("radioButton_computer_built_no"));
        radioButton_computer_built_no->setGeometry(QRect(280, 90, 41, 17));
        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 110, 231, 20));
        label_computer_error = new QLabel(groupBox_8);
        label_computer_error->setObjectName(QStringLiteral("label_computer_error"));
        label_computer_error->setGeometry(QRect(20, 125, 171, 21));
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 170, 581, 351));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 341, 161));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 321, 20));
        groupBox_14 = new QGroupBox(tab);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(340, 10, 229, 159));
        combo_programmers_2 = new QComboBox(groupBox_14);
        combo_programmers_2->setObjectName(QStringLiteral("combo_programmers_2"));
        combo_programmers_2->setGeometry(QRect(20, 30, 181, 22));
        radioProgAsc_2 = new QRadioButton(groupBox_14);
        radioProgAsc_2->setObjectName(QStringLiteral("radioProgAsc_2"));
        radioProgAsc_2->setGeometry(QRect(30, 70, 71, 20));
        radioProgDesc_2 = new QRadioButton(groupBox_14);
        radioProgDesc_2->setObjectName(QStringLiteral("radioProgDesc_2"));
        radioProgDesc_2->setGeometry(QRect(120, 70, 81, 21));
        button_filterProg_2 = new QPushButton(groupBox_14);
        button_filterProg_2->setObjectName(QStringLiteral("button_filterProg_2"));
        button_filterProg_2->setGeometry(QRect(120, 130, 81, 23));
        tabWidget->addTab(tab, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButton_10 = new QPushButton(tab_7);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(440, 490, 131, 23));
        label_11 = new QLabel(tab_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 110, 47, 13));
        label_12 = new QLabel(tab_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(300, 110, 47, 13));
        lineEdit_11 = new QLineEdit(tab_7);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(100, 80, 181, 20));
        label_13 = new QLabel(tab_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 80, 111, 16));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(300, 80, 111, 16));
        lineEdit_12 = new QLineEdit(tab_7);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(400, 80, 171, 20));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(410, 470, 161, 16));
        groupBox_10 = new QGroupBox(tab_7);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 10, 289, 59));
        comboBox_4 = new QComboBox(groupBox_10);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 20, 131, 22));
        radioButton_11 = new QRadioButton(groupBox_10);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(160, 20, 82, 17));
        radioButton_14 = new QRadioButton(groupBox_10);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setGeometry(QRect(210, 20, 82, 17));
        groupBox_11 = new QGroupBox(tab_7);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(290, 10, 279, 59));
        comboBox_5 = new QComboBox(groupBox_11);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(10, 20, 131, 22));
        radioButton_12 = new QRadioButton(groupBox_11);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(150, 20, 82, 17));
        radioButton_13 = new QRadioButton(groupBox_11);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(200, 20, 82, 17));
        table_realation_person = new QTableWidget(tab_7);
        if (table_realation_person->columnCount() < 1)
            table_realation_person->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_realation_person->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        table_realation_person->setObjectName(QStringLiteral("table_realation_person"));
        table_realation_person->setGeometry(QRect(0, 130, 281, 331));
        table_realation_person->setShowGrid(false);
        table_realation_person->horizontalHeader()->setStretchLastSection(true);
        table_realation_computers = new QTableWidget(tab_7);
        if (table_realation_computers->columnCount() < 1)
            table_realation_computers->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_realation_computers->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        table_realation_computers->setObjectName(QStringLiteral("table_realation_computers"));
        table_realation_computers->setGeometry(QRect(300, 130, 271, 331));
        table_realation_computers->setAutoFillBackground(false);
        table_realation_computers->setShowGrid(false);
        table_realation_computers->setSortingEnabled(false);
        table_realation_computers->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_12 = new QGroupBox(tab_8);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 10, 319, 109));
        label_16 = new QLabel(groupBox_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 30, 47, 13));
        text_search = new QLineEdit(groupBox_12);
        text_search->setObjectName(QStringLiteral("text_search"));
        text_search->setGeometry(QRect(50, 30, 261, 20));
        button_search = new QPushButton(groupBox_12);
        button_search->setObjectName(QStringLiteral("button_search"));
        button_search->setGeometry(QRect(210, 70, 101, 23));
        groupBox_13 = new QGroupBox(tab_8);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(320, 10, 259, 109));
        combo_search = new QComboBox(groupBox_13);
        combo_search->setObjectName(QStringLiteral("combo_search"));
        combo_search->setGeometry(QRect(120, 20, 121, 22));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 20, 111, 16));
        list_search = new QListWidget(tab_8);
        list_search->setObjectName(QStringLiteral("list_search"));
        list_search->setGeometry(QRect(0, 110, 579, 399));
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

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_5->setText(QApplication::translate("MainWindow", "Seletect a Scientist to remove from database and push remove", 0));
        QTableWidgetItem *___qtablewidgetitem = table_programmers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_programmers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_programmers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_programmers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Death year", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Add Scientist", 0));
        label_2->setText(QApplication::translate("MainWindow", "Name: ", 0));
        label_3->setText(QApplication::translate("MainWindow", "Birth:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Death: ", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add", 0));
        button_scientist_male->setText(QApplication::translate("MainWindow", "Male", 0));
        button_scientist_female->setText(QApplication::translate("MainWindow", "Female", 0));
        label_scientist_error->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        radioProgAsc->setText(QApplication::translate("MainWindow", "Ascending", 0));
        radioProgDesc->setText(QApplication::translate("MainWindow", "Descending", 0));
        button_filterProg->setText(QApplication::translate("MainWindow", "Filter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Scientists", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        radioCompAsc->setText(QApplication::translate("MainWindow", "Ascending", 0));
        radioCompDesc->setText(QApplication::translate("MainWindow", "Descending", 0));
        button_filterComp->setText(QApplication::translate("MainWindow", "Filter", 0));
        label_9->setText(QApplication::translate("MainWindow", "Seletect a Scientist to remove from database and push remove", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "Remove", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Year", 0));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "Search", 0));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        radioProgAsc_2->setText(QApplication::translate("MainWindow", "Ascending", 0));
        radioProgDesc_2->setText(QApplication::translate("MainWindow", "Descending", 0));
        button_filterProg_2->setText(QApplication::translate("MainWindow", "Filter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Relations", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "Connect", 0));
        label_11->setText(QApplication::translate("MainWindow", "Scientists", 0));
        label_12->setText(QApplication::translate("MainWindow", "Comptuers", 0));
        label_13->setText(QApplication::translate("MainWindow", "Search in scientists", 0));
        label_14->setText(QApplication::translate("MainWindow", "Search in computers", 0));
        label_15->setText(QApplication::translate("MainWindow", "Select what you want to connect", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Sort scientists", 0));
        radioButton_11->setText(QApplication::translate("MainWindow", "ASC", 0));
        radioButton_14->setText(QApplication::translate("MainWindow", "DESC", 0));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Sort computers", 0));
        radioButton_12->setText(QApplication::translate("MainWindow", "ASC", 0));
        radioButton_13->setText(QApplication::translate("MainWindow", "DESC", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_realation_person->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_realation_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Name", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Add relations", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Search in database", 0));
        label_16->setText(QApplication::translate("MainWindow", "Search:", 0));
        button_search->setText(QApplication::translate("MainWindow", "Search", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        label_17->setText(QApplication::translate("MainWindow", "Scientist or computer:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
