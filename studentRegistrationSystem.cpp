#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>
#include "Student.h"
#include "Module.h"

using namespace std;


int main()
{
    
    map<int, Student> mpStudent;
    map<int, Module> mpModule;
    
    Student st;
    Module mod;
    
    map<int, Student>:: iterator it;
    map<int, Module>:: iterator it2;
    map<int, Student>:: iterator it3;
    
   // int id, mid;
    int choice = -1;

    while(choice !=0)
    {        
        cout<<"\n# College Registration System #";
        cout<<"\n 1> Add Record";
        cout<<"\n2> Get All Student Records";
        cout<<"\n3> Update Student Record";
        cout<<"\n4> Add Module";
        cout<<"\n5> Get All Modules details";
        cout<<"\n6> Update Module";
        
        cout<<"\n0> Exit..";
        
        cout<<"\n Enter your choice : ";
        cin>>choice;
         
            switch(choice){
                case 1:
                
                    st.addStudentRecord(mpStudent);
                    break;
                case 2:
                    st.displayStudentRecord(mpStudent);
                    
                break;
            
                case 3: 
                    //UPDATE STUDENT RECORD
                    st.updateStudentRecord(mpStudent);            
                    break;
                
                case 4:
                    //Add Module
                    mod.addModule(mpModule);
                    break;
            
                case 5: 
                    //Display All Modules;
                    mod.displayModuleDetails(mpModule);
                    break;
                    
                
                case 6: 
                    //UPDATE MODULE RECORD
                    mod.updateModule(mpModule);
                    break;
                
                case 0:
                cout<<"\nThankyou !! Good Bye.................\n "; 
                break;
                
                default: 
                    cout<<"\nInvalid choice.................\n"; 
                    
            }
       
    }
    
    return 0;
}
