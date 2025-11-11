#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class Instructor: public Person {
private:
string department; 
int experienceYears;
public:
Instructor();
Instructor(string d, int exp, string n, int Pid): Person (n, Pid); 
~Instructor(); 
void diplay();
void setDepartment (string newDep); 
void setExp (int newExp);
string getDep();
int getExp();
};










#endif
