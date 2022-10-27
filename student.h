//
//  student.h
//  Student System Project
//
//  Created by Lachelle Allen on 8/2/22.
//

#ifndef student_h
#define student_h

#include <iostream>
#include <iomanip>

#include "degree.h"

using std:: cout;
using std:: string;
using std:: endl;
using std:: left;
using std:: setw;

//define Student class


class Student{
public:
    const static int daysArraySize= 3;
    
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[daysArraySize];
    DegreeProgram degreeProgram;
    
public:
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);
    ~Student();
    
    //getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    string getAge();
    const int* getDaysInCourse();
    DegreeProgram getDegreeProgram();
    
    //setters
    void setStudentID (string studentID);
    void setFirstName (string firstName);
    void setLastName (string lastName);
    void setEmailAddress (string emailAddress);
    void setAge (int age);
    void setDaysInCourse (const int daysInCourse[]);
    void setDegreeProgram (DegreeProgram dp);
    
    
    static void printHeader();
  
    void print();
   
};


#endif /* student_h */
