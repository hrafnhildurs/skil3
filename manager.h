#ifndef MANAGER_H
#define MANAGER_H
#include "database.h"

/* The manager class handles communications between interface class
 * and the database class.
*/

class Manager
{
public:
    Manager();

    // Person logic
    void addPersonAlive(string n, string s, int b);
    void addPersonDead(string n, string s, int b, int d);
    void updateallperson(string n, string s, int b, int d);
    bool checkDuplicateScientist(string n, string s, int b);
    bool checkDuplicateComputer(string cn, int cy, string ct, string cb);
    bool checkDuplicateDeadScientist(string n, string s, int b, int d);
    vector<person> asInserted();
    vector<person> alphabeticSortAsc();
    vector<person> alphabeticSortDes();
    vector<person> birthYearSort();
    vector<person> birthYearSortDesc();
    void deleteName(person name);
    void deleteNameRelations(int id);
    void deleteCompRelations(int id);

    // Search logic
    vector<person> search(string searchWord);

    // Computer logic
    void addComputer(string cn, int cy, string ct, string cb);
    vector<computer> computerAsInserted();
    vector<computer> computerSortAsc();
    vector<computer> computerSortDesc();
    vector<computer> computerSortYear();
    vector<computer> computerSortYearDesc();
    vector<computer> searchComp(string searchWord);
    void deleteComputer(computer name);

    // Relations logic
    void addRelations(int pid, int cid);
    void addNamesRelations(int id, string p, string c);
    vector<relations> relation();
    void deleteRelation(relations id);
    bool checkDuplicateRelations(int pid, int cid);
    vector<relations> searchRelation(string searchWord);

private:
    Database db;
};

#endif // MANAGER_H
