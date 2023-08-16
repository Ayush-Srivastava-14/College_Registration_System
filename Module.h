#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>
#ifndef MODULE_H
#define MODULE_H

using namespace std;

class Module{
    public:
     int moduleNo;
     string moduleName;
     int duration;//in months
     float fees;
     string tentativeStartDate; // date is taken here as string and will be changed into Date type when connecting with DB.
     
     void addModule(map<int, Module>& mp);

    void displayModuleDetails(map<int, Module> mp);

     void updateModule(map<int, Module> &mpModule);
};

#endif