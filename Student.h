#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student: public Person{
private:
int yearLevel; 
string major;
public:
Student();
Student (int y, string m, string n, int Pid): Person (n, Pid);
~Student();
void display();
void setYearLevel(int newYear);
void setMajor(string newMajor);
int getYearLevel();
string getMajor();

};











#endif
