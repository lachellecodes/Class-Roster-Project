//
//  roster.cpp
//  Student System Project
//
//  Created by Lachelle Allen on 8/2/22.
//

#include "roster.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Roster* parse(string);



    
/*
    int lastIndex= -1;
    int numStudents =5;
    classRosterArray[0]= new Student;
    classRosterArray[1]= new Student;
    classRosterArray[2]= new Student;
    classRosterArray[3]= new Student;
    classRosterArray[4]= new Student;
    
    for(int i=0; i<numStudents; ++i){
        classRosterArray[i] = parse(studentData[i]);
        classRosterArray[i].Print();
        
        for(int i=0; i<numStudents; ++i){
            delete classRosterArray[i];
        };*/

//parse function
        
     void Roster:: parse(string row){
        size_t rhs = row.find(",");
        string studentID=row.substr(0,rhs);
        
        size_t lhs = rhs +1;
        rhs = row.find(",", lhs);
        string firstName = row.substr(lhs, rhs-lhs);
        
        lhs = rhs +1;
        rhs = row.find(",", lhs);
        string lastName = row.substr(lhs, rhs-lhs);
        
        lhs = rhs +1;
        rhs= row.find(",", lhs);
        string emailAddress = row.substr(lhs, rhs-lhs);
        
        lhs = rhs +1;
        rhs= row.find(",", lhs);
        int age = stoi(row.substr(lhs, rhs-lhs));
        
        lhs = rhs+1;
        rhs= row.find(",", lhs);
        int daysInCourse1 = stoi(row.substr(lhs, rhs-lhs));
        
        lhs = rhs+1;
        rhs=row.find(",", lhs);
        int daysInCourse2 = stoi(row.substr(lhs, rhs-lhs));
        
        lhs = rhs+1;
        rhs=row.find(",", lhs);
        string daysInCourse3 = row.substr(lhs, rhs-lhs);
        
        lhs = rhs+1;
        rhs = row.find(",", lhs);
        string strdegreeProgram = row.substr(lhs, rhs-lhs);
        
        DegreeProgram degreeProgram=DegreeProgram :: SECURITY;
        if (strdegreeProgram == "SECURITY"){
            degreeProgram = DegreeProgram:: SECURITY;
        }
        else if (strdegreeProgram == "NETWORK"){
            degreeProgram = DegreeProgram :: NETWORK;
        }
        else if (strdegreeProgram == "SOFTWARE"){
            degreeProgram = DegreeProgram :: SOFTWARE;
        }
         
         
  Roster ::add (studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
        
        }

//add function creates a new student object and then adds the object to classRosterArray
 
 void Roster ::add(string studentID, string firstName,string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram){
    int daysInCourse[3]= {daysInCourse1, daysInCourse2, daysInCourse3 };
    lastIndex++;
        classRosterArray[lastIndex]= new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}
        
        
//remove function

void Roster::remove (string studentID){
        bool success = false;
        for (int i = 0; i <= Roster:: lastIndex; i++){
            if (classRosterArray[i])->getstudentID()==studentID)
            {
                success= true;
            Roster *temp = classRosterArray[i];
            classRosterArray[i] = classRosterArray[numStudents-1];
            classRosterArray[numStudents-1]= temp;
                Roster :: lastIndex--;
            }
            {
            if (success)
                cout << "Student" << studentID << "was not found." <<endl;
    }
    
    public void Roster :: printAll()
    {
        for (int i=0; i< numStudents; ++i)}
            classRosterArray[i]->print();
}
        
    public void Roster :: printAverageDaysInCourse(string studentID){
     for (int i=0; i<= Roster :: lastIndex; i++)
            {
                if (classRosterArray[i] ->getStudentId() ==studentId)
                { cout <<studentId << ":";
                cout << (classRosterArray[i]->daysInCourse()[0] +
                         classRosterArray[i]->daysInCourse()[1]+
                         classRosterArray[i]->daysInCourse()[2])/ 3.0; << endl;
        }
                
        public void Roster :: printInvalidEmails()
                {for (int i=0; i<Roster ::lastIndex; i++){
                    string emailAddress= Roster::getemailAddress()
                    if (emailAddress.find(" ") == string:npos){
                        cout << emailAddress << "is invalid." << endl;
                    }
                        else if (emailAddress.find(".")==string ::npos){
                            cout << emailAddress << "is invalid." <<endl;
                        }
                    
                        else if (emailAddress.find("@")==string ::npos){
                            cout<< emailAddress<< "is invalid." <<endl;
                        }
                
      public void Roster ::printByDegreeProgram(DegreeProgram degreeProgram)
                    for (int i=0, i<=Roster ::lastIndex; i++)
                        if (Roster ::classRosterArray[i]->getDegreeProgram() ==dp)
                        {classRosterArray[i] ->print();}
                
    
