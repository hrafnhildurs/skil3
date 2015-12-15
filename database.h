#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <locale>
#include <stdlib.h>
#include "person.h"
#include "computer.h"
#include "relations.h"
#include <QtSql>

/* Database class handles all queries made to the SQL database by the
 * manager class.
*/

class Database
{
public:
    // Constructor & Destructor
    Database();
    ~Database();

    // Adding functions
    void addPersonAlive(string n, string s, int b);
    void addPersonDead(string n, string s, int b, int d);
    void addComputer(string cn, int cy, string ct, string cb);
    void addRelations(int pid, int cid);
    void addNamesRelations(int id, string p, string c);
    bool checkDuplicateScientist(string n, string s, int b);
    bool checkDuplicateDeadScientist(string n, string s, int b, int d);
    bool checkDuplicateComputer(string cn, int cy, string ct, string cb);
    bool checkDuplicateRelations(int pid, int cid);
    void UpdatePerson(string n, string s, int b, int d);

    // Helper function to see if connection to database is ok.
    bool connectionOk();

    // Person vectors with various sorting preferences from database
    vector<person> pSortAsInserted();
    vector<person> pSortAlphAsc();
    vector<person> pSortAlphDes();
    vector<person> pSortByBirthYear();
    vector<person> pSortByBirthYearDesc();
    vector<person> search(string searchWord);

    // Computer vectors with verious sorting preferences from database
    vector<computer> cAsInserted();
    vector<computer> cSortAsc();
    vector<computer> cSortDesc();
    vector<computer> cSortYear();
    vector<computer> cSortYearDesc();
    vector<computer> searchComp(string searchWord);

    // Vector containing relations between computers and computer scientists
    vector<relations> relation();


    // Helper delete functions
    void deleteName(person name);
    void deleteComputer(computer name);
    void deleteRelation(relations id);
    void deleteNameRelations(int id);
    void deleteCompRelations(int id);
private:
    // Handles queries from manager class to obtain data from database
    // and writes corresponding data into a vector of object asked for
    vector<person> writeToVector(QSqlQuery query);
    vector<computer> writeComToVector(QSqlQuery query);
    vector<relations> writeOutComAndPersonVector(QSqlQuery query);
    vector<relations> writeOutRelations(QSqlQuery query);

    // Handles deletion from the database
    void deleteName(person name, bool db_ok);
    void deleteComputer(computer name, bool db_ok);
    void deleteRelation(relations id, bool db_ok);
    void deleteNameRelations(int id, bool db_ok);
    void deleteCompRelations(int id, bool db_ok);

    // Private variables/objects owned by database class
    bool db_ok;
    person pers;
    computer com;
    relations rel;
    QSqlDatabase db;


    const QString DB_LOCATION = "C:\\Users\\Hrafnhildur\\Documents\\Skólinn\\Verklegt namskeid 1\\Vika3\\Skil3\\programmers2.sqlite";

};

#endif // DATABASE_H
