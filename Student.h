#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{
    public:
    
    int studId;
    string studName;
    string bloodGrp;
    string studAddress;
    string dateOfBirth;  // date is taken here as string and will be changed into Date type when connecting with DB.
    
    
    void addStudentRecord(map<int, Student>& mp);
       
    
    void updateStudentRecord(map<int, Student>& mpStudent);
    
    void displayStudentRecord(map<int, Student> mp);
    
};

#endif