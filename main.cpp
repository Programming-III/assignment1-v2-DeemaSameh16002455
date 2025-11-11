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
void Student::setYearLevel(int newYear){
   yearlevel= newYear;
}
void Student::setMajor(string newMajor){
   major=NewMajor;
}
int Student:: getYearLevel(){
   return yearLevel;
}
string Student::getMajor(){
   return major;
}





// ==================== Instructor Class Implementation ====================
Instructor:: Instructor(){
department= "";
experienceYears= 0;
}

Instructor:: Instructor(string d, int exp, string n, int Pid): Person (n, Pid){
   department=d; 
   experienceYears= exp;
}
~Instructor::Instructor (){}

void Instructor:: diplay(){
  Person:: display();
   cout<< "Department: "<< department<<endl;
   cout<< "Years of Experience: "<< experienceYears<<endl;
}

void Instructor:: setDepartment (string newDep){
   department= newDep;
}
void Instructor:: setExp (int newExp){
   experienceYears= newExp;
}
string Instructor:: getDep(){
   return department;
}
int Instructor:: getExp(){
   return experienceYears;
}





// ==================== Course Class Implementation ====================
Course::Course(){
   courseCode= "";
   courseName="";
   maxStudents=0;
   currentStudents= 0;
}
Course::Course (string code, string name, int max, int current){
    courseCode= code;
   courseName=name;
   maxStudents=max;
   currentStudents= current;
   students= new Student [max];
}
~Course(){
   delete []students;
}
void addStudent(const Student& s){
   Student* newStudent= new Student [max +1];
   for (int i=0; i< max; i++){
      newStudent[i]= students[i];
}
newStudent[currentStudents]= s;
delete students; 
students= newStudent; 
}
void displayCourseInfo(){
   cout<<"Course code: "<< courseCode<< endl;
   
}
void setCourseCode(string newCode);
void setCourseName(string newName);
string getCourseCode();
string getCourseName();







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
