#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>
#include "Student.h"

using namespace std;

    
void Student::addStudentRecord(map<int, Student>& mp){
       
        cout <<"\nEnter Student ID: ";
       // checkInputInt(studId);
        cin >> studId;
        cin.sync();
        
        //executes loop if the input fails (e.g., no characters were read)
        
        cout <<"\nEnter Student Name: ";
        getline(cin, studName);
        
        cout <<"Enter Student Blood Group: ";
        getline(cin, bloodGrp);

        cout <<"Enter Student Address: ";
        getline(cin, studAddress);

        cout <<"Enter Student DOB: ";
        getline(cin, dateOfBirth);
        
        
        
        mp.insert({this->studId, *this});
                        
}
    
    void Student::updateStudentRecord(map<int, Student>& mpStudent){
         cout<<"\n# Update Student Record \n";
        int StdNo;

        cout<<"\nEnter Std No : ";
        cin>>StdNo;
        //return StdNo;
        int choice2 = -1;
        int flag=0;
       
        while(choice2 != 0){

            if(mpStudent.find(StdNo)!=mpStudent.end()){
                        //if the element is found before the end of the map
                    //  cout<<" : found : Value -Name: "<< mpStudent[id].studName <<endl;
                        //if the element is present then you can access it using the index
                        cout <<"enter the  detail you want to update:"<<endl;
                        
                        cout<<"\n 1> Update Student Name";
                        cout<<"\n2> Update Student Blood Group";
                        cout<<"\n3> Update Student Address";
                        cout<<"\n4> Update Student DOB";
                        cout<<"\n0> Exit";
                        cout<<"\n Enter your choice : ";

                        
                        string name;
                        string bldGrp;
                        string address;
                        string dob;
                        
                        cin >>choice2;
                        switch(choice2){
                            case 1:
                                
                                cout <<"\nEnter name again:";
                                cin >> name;
                                mpStudent[StdNo].studName = name; 
                                
                                break;
                                
                            case 2:
                                cout <<"\nEnter Blood Group again:";
                                cin >> bldGrp;
                                mpStudent[StdNo].bloodGrp = bldGrp; 

                                break;
                            
                            case 3:
                                cout <<"\nEnter Address again:";
                                cin >> address;
                                mpStudent[StdNo].studAddress = address; 

                                break;
                            
                            case 4:
                                cout <<"\nEnter DOB again:";
                                cin >> dob;
                                mpStudent[StdNo].dateOfBirth = dob; 
                                break;
                            
                            case 0:
                                cout<<"\nThankyou !!!!\n "; 
                                break;
                            
                            default:
                            cout<<"\nInvalid choice..................."; 
                        }
                        
            }
                
            else{
                cout<<"\n : ID Not found................."<<endl;
                choice2 = 0;
                flag=1;
            }
        }

        if(flag != 1){
            cout << "Updated Record ...................." << endl;
            displayStudentRecord(mpStudent);
        }
        //if student ID record exists then ask user which details need to be updated
        //update those details for given ID
    }

    
    void Student::displayStudentRecord(map<int, Student> mp){
         map<int, Student>:: iterator it3;
         
        it3 = mp.begin();
                while (it3 != mp.end())
                  {
                    cout <<  "Student ID: "<< it3->second.studId << "\t "<<  "Name: "<<  it3->second.studName <<"\t "<< "Blood Group: "<<  it3->second.bloodGrp <<"\t " << "Address: " <<  it3->second.studAddress <<"\t "<< "DOB " <<  it3->second.dateOfBirth <<endl;
                    //cout <<"Inside display fn"<<endl;    
                    //it->second.displayStudentRecord();
                    it3++;
                }
       
    }
    

