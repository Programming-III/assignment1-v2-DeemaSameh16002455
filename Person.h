#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{
private:
string name; 
int id;
public:
Person();
Person(string n, int Pid);
~Person();
virtual void display();
void setName (string newName);
void setID (int newID);
string getName();
int getID();
};











#endif
