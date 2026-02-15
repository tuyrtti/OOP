#include "student.h"
#include <iostream>

student::student(string n, int a){

    name = n;
    age = a;
}


string student::getName() const
{
    return name;
}

void student::setName(const string &newName)
{
    name = newName;
}

int student::getAge() const
{
    return age;
}

void student::setAge(int newAge)
{
    age = newAge;
}

void student::printStudentInfo()
{
    cout << "Name: " << name << " Age: "
         << age << endl;
}
