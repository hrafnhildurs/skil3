#include "manager.h"

Manager::Manager() { }


void Manager::addPersonAlive(string n, string s, int b) {
    db.addPersonAlive(n, s, b);
}

void Manager::addPersonDead(string n, string s, int b, int d) {
    db.addPersonDead(n, s, b, d);
}

void Manager::updateallperson(string n, string s, int b, int d) {
    db.UpdatePerson(n, s, b, d);
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
bool Manager::checkDuplicateScientist(string n, string s, int b) {
    return db.checkDuplicateScientist(n, s, b);
}
bool Manager::checkDuplicateDeadScientist(string n, string s, int b, int d) {
    return db.checkDuplicateDeadScientist(n, s, b, d);
}
bool Manager::checkDuplicateComputer(string cn, int cy, string ct, string cb) {
    return db.checkDuplicateComputer(cn, cy, ct, cb);
}

bool Manager::checkDuplicateRelations(int pid, int cid) {
    return db.checkDuplicateRelations(pid, cid);
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

void Manager::deleteNameRelations(int id)
{
    db.deleteNameRelations(id);
}

void Manager::deleteCompRelations(int id)
{
    db.deleteCompRelations(id);
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
