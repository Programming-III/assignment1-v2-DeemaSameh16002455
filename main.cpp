#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person :: Person (){
   name= "";
   id= 0;
}

Person :: Person(string n, int Pid){
name= n;
id= Pid;  
}

virual void Person:: display(){
cout<< "Name: "<< name<<endl;
cout<< "ID: " << id<< endl;
}

void Person::setName(string newName){
   name= newName;
}

void Person::setID(int newID){
   id= newID;
}

string Person::getName(){
  return name;
}

int Person::getID(){
  return id;
}







// ==================== Student Class Implementation ====================
Student::Student(){
   yearLevel= 0; 
   major= "";
}
Student::Student (int y, string m, string n, int Pid): Person (n, Pid){
yearLevel= y;
major= m; 
}
~Student(){}
void Student::display(){
Person::display();
cout<< "Year level: "<< yearLevel<< endl;
cout<< "Major: "<< major<< endl;
}
void setYearLevel(int newYear){
   yearlevel= newYear;
}
void setMajor(string newMajor){
   major=NewMajor;
}
int getYearLevel(){
   return yearLevel;
}
string getMajor(){
   return major;
}





// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
