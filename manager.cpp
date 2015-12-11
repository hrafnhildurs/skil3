#include "manager.h"

Manager::Manager() { }

// Calls addPersonAlive() function in database class
void Manager::addPersonAlive(string n, string s, int b) {
    db.addPersonAlive(n, s, b);
}
// Calls addPersonDead() function in database class
void Manager::addPersonDead(string n, string s, int b, int d) {
    db.addPersonDead(n, s, b, d);
}

void Manager::addComputer(string cn, int cy, string ct, string cb) {
    db.addComputer(cn, cy, ct, cb);
}
void Manager::addRelations(int pid, int cid) {
    db.addRelations(pid, cid);
}
void Manager::addNamesRelations(int id, string p, string c) {
    db.addNamesRelations(id, p, c);
}


// Prints the list ordered by time inserted
vector<person> Manager::asInserted() {
    return db.pSortAsInserted();
}

// Ascending sorting function
vector<person> Manager::alphabeticSortAsc() {
    return db.pSortAlphAsc();
}

// Descending sorting function
vector<person> Manager::alphabeticSortDes() {
    return db.pSortAlphDes();
}

vector<person> Manager::birthYearSort() {
    return db.pSortByBirthYear();
}

vector<person> Manager::birthYearSortDesc() {
    return db.pSortByBirthYearDesc();
}

// Search function
vector<person> Manager::search(string searchWord) {
    return db.search(searchWord);
}

// Delete name from database
void Manager::deleteName(person name){
    db.deleteName(name);
}
// Delete computer from database
void Manager::deleteComputer(computer name){
    db.deleteComputer(name);
}

void Manager::deleteRelation(relations id){
    db.deleteRelation(id);
}

vector<computer> Manager::computerAsInserted() {
    return db.cAsInserted();
}

vector<computer> Manager::computerSortAsc() {
    return db.cSortAsc();
}
vector<computer> Manager::computerSortDesc() {
    return db.cSortDesc();
}
vector<computer> Manager::computerSortYear() {
    return db.cSortYear();
}
vector<computer> Manager::computerSortYearDesc() {
    return db.cSortYearDesc();
}
vector<computer> Manager::searchComp(string searchWord) {
    return db.searchComp(searchWord);
}
vector<relations> Manager::relation() {
    return db.relation();
}
