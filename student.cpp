//
//  student.cpp
//  Student System Project
//
//  Created by Lachelle Allen on 8/2/22.
//


#include <iostream>
#include <string>
using namespace std;

#include "student.h"
#include "degree.h"



//getters

string Student::getStudentID(){
    return studentID;
}

string Student::getFirstName(){
    return firstName;
}

string Student::getLastName(){
    return lastName;
}

string Student::getEmailAddress(){
    return emailAddress;
}

string Student::getAge(){
    return age;
}

const int* Student::getDaysInCourse(){
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram(){
    return degreeProgram;
}

//setters

void Student::setStudentID(<#string studentId#>){
    this->studentID = studentID;
}

void Student::setFirstName(<#string firstName#>){
    this->firstName = firstName;
}

void Student::setLastName(<#string lastName#>){
    this->lastName = lastName;
}

void Student::setEmailAddress(<#string emailAddress#>){
    this->emailAddress = emailAddress;
}

void Student::setAge(int age){
    this->age = age;
}

void Student:: setDaysInCourse(<#const int *daysInCourse#>){
    for (int i=0; i<daysArraySize; i++) this ->daysInCourse[i] =daysInCourse[i];
}

void Student::setDegreeProgram(<#DegreeProgram dp#>){
    this->degreeProgram = degreeProgram;
}

Student::Student()
{
    this ->studentID =" ";
    this ->firstName =" ";
    this ->lastName =" ";
    this ->emailAddress =" ";
    this ->age ="";
    for (int i=0; i<daysArraySize; i++) this ->daysInCourse[i] = 0;
    this -> degreeProgram = DegreeProgram() ;
    
}

Student :: Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram){
    this ->studentID = studentID;
    this->firstName =firstName;
    this->lastName =lastName;
    this->emailAddress =emailAddress;
    this->age=age;
    for (int i=0; i<daysArraySize; i++) this->daysInCourse[i] = daysInCourse[i];
    this->degreeProgram=degreeProgram;
}

//destructor
Student :: ~Student() {}

//define print function

void Student::print()
{
    cout << this->studentID << 't';
    cout << "First Name : " << this->firstName << '\t';
    cout << "Last Name: " << this->lastName << '\t';
    cout << "Email Address: " << this->emailAddress << '\t';
    cout << "Age: " << this->age << '\t';
    cout << "Days In Course: "<< this ->daysInCourse[0] << this->daysInCourse[1] << this->daysInCourse[2] << '\t';
    cout <<  "Degree Program: ";
    if (degreeProgram == DegreeProgram :: SOFTWARE){
        cout << "SOFTWARE" << endl;}
    if (degreeProgram == DegreeProgram :: NETWORK){
        cout << "NETWORK" << endl;
    }
    if (degreeProgram == DegreeProgram :: SECURITY){
        cout << "SECURITY" << endl;
    }
}

