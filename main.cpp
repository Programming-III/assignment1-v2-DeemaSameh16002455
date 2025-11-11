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

void Person::getName(){
  return name;
}

void Person::getID(){
  return id;
}







// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
