#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course{
private: 
string courseCode; 
string courseName; 
int maxStudents; 
Student* students;
int currentStudents;

public:
Course();
Course (string code, string name, int max, int current);
~Course();
void addStudent(const Student& s);
void displayCourseInfo();
void setCourseCode(string newCode);
void setCourseName(string newName);
string getCourseCode();
string getCourseName();
};













#endif
