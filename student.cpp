#include "student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student(char* n)
{
  strcpy(name, n);
}

Student::~Student()
{}

char* Student::getName()
{
  return name;
}

void Student::setName(char* n)
{
  strcpy(name, n);
}
