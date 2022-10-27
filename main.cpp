//
//  main.cpp
//  Student System Project
//
//  Created by Lachelle Allen on 8/1/22.
//


#include <iostream>

#include <string>

#include "roster.h"
#include "student.h"
#include "degree.h"

using namespace std;


int main (){
    
    
//add student data into main function
    
    const int numStudents=5;
    
    const string studentData[] =
    {"A1,John,Smith,John1989@gma il.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Lachelle,Allen,lachelleallen@icloud.com,34,21,17,40,SOFTWARE"
    };
    
 //print course title langugage and student info to the screen

cout << "Scripting and Programming Applications C867";
cout << endl;
cout << "Language : C++";
cout << endl;
cout << "Student ID: 007467667";
cout << endl;
cout << "Lachelle Allen";
cout << endl;
    
    Roster* classRoster=new Roster();
    
    const int numStudents = 5;
    
    for (int i=0; i<5; i++){
        classRoster->parse(studentData[i])
        
    }
        
        cout <<"Displaying all students: "<< endl;
        classRoster->printAll();
        cout << endl;
        
        cout <<"Displaying invalid emails: "<< endl;
        classRoster->printInvalidEmails();
        cout << endl;
        
        cout <<"Average Days In Course" << endl;
        for (int i=0; i<numStudents; i++)
        {
            string studentId = classRoster->classRosterArray[i]->getStudentID();
            cout << "Student ID: " << studentId << "," << "average days in course is";
            classRoster->printAverageDaysInCourse(studentId);
        };
        
        classRoster->printByDegreeProgram(DegreeProgram ::SOFTWARE);
        
        classRoster->remove("A3");
        
       
  
    return 0;
    
}

