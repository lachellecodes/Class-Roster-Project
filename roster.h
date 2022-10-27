//
//  roster.h
//  Student System Project
//
//  Created by Lachelle Allen on 8/2/22.
//
#pragma once
#ifndef roster_h
#define roster_h
#include <string>
#include <iostream>
#include "student.h"

using namespace std;


#endif /* roster_h */
class Roster
{ public:
   
    Student* classRosterArray[5];
    int lastIndex = -1;
    //int numStudents = 5;
    
    

    Roster();

    
    Student** getStudents();
    
    void parse(string row);
  
    
    void  add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree );
    
    void printAll();
    void printByDegreeProgram(DegreeProgram);
    void printInvalidEmails();
    void printAverageDaysInCourse(string studentID );
    void remove (string studentID );
    
    
    
};
