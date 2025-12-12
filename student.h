#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

/*
  Nick H
  11/12/25
  Student class with setters and getters for a name field
*/

class Student
{
 public:
  Student(char* n); //Construct a student with a name
  ~Student(); //Destructor
  char* getName(); //Returns name
  void setName(char* n); //Sets name
 private:
  char name[51]; //50 character limit
};

#endif
