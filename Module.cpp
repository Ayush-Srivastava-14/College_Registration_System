#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>
#include "Module.h"

using namespace std;
   
    
    void Module:: addModule(map<int, Module>& mp){
        cout << "\nEnter Module No.: "<<endl;
        cin >> moduleNo;
        cin.sync();
        
        cout << "\nEnter Name: " <<endl;
        getline(cin, moduleName);
        
        cout << "\nEnter Duration(no. of months): "<<endl;
        cin >> duration;
        
        cout << "\nEnter Fees:"<<endl;
        cout << "Rs.";
        cin >> fees;
        cin.sync();

        cout << "\nEnter Tentative Start Date: "<<endl;
        getline(cin, tentativeStartDate);
        
        
         mp.insert({this->moduleNo, *this});
     }
     
     void Module::displayModuleDetails(map<int, Module> mp){
        
         map<int, Module>:: iterator it3;
         
        it3 = mp.begin();
                while (it3 != mp.end())
                  {
                    cout <<  "Module No.: "<< it3->second.moduleNo << "\t "<<  "Module Name: "<<  it3->second.moduleName <<"\t "<< "Duration: "<<  it3->second.duration <<"\t " << "Fees: " <<  it3->second.fees <<"\t "<< "Tentative start Date: " <<  it3->second.tentativeStartDate <<endl;
                 
                    it3++;
                }
       
        
     }
     
    void Module::updateModule(map<int, Module> &mpModule){
        cout<<"\n# Update Module Record................. \n";
        int mid;

        cout<<"\nEnter Module No : ";
        cin>>mid;
        int flag = 0;
       int choice2 = -1;

        while(choice2 !=0)
        {
            if(mpModule.find(mid)!=mpModule.end()){
                        //if the element is found before the end of the map
                    //  cout<<" : found : Value -Name: "<< mpStudent[id].studName <<endl;
                        //if the element is present then you can access it using the index
                        cout <<"enter the detail you want to update:"<<endl;
                        
                        cout<<"\n 1> Update Module Name";
                        cout<<"\n2> Update Module Duration";
                        cout<<"\n3> Update Module Fees";
                        cout<<"\n4> Update Module Tentative Start Date";
                        cout<<"\n0> Exit";
                        cout<<"\n Enter your choice : ";
                        
                        
                        string mname;
                        int mduration;
                        float mfees;
                        string mdate;
                        
                        cin >>choice2;
                        switch(choice2){
                            case 1:
                                
                                cout <<"\nEnter Module name again:";
                                cin >> mname;
                                mpModule[mid].moduleName = mname; 
                                
                                break;
                                
                            case 2:
                                cout <<"\nEnter Duration again:";
                                cin >> mduration;
                                mpModule[mid].duration = mduration; 

                                break;
                            
                            case 3:
                                cout <<"\nEnter Fees again:";
                                cin >> mfees;
                                mpModule[mid].fees = mfees; 

                                break;
                            
                            case 4:
                                cout <<"\nEnter Tentative Start Date again:";
                                cin >> mdate;
                                mpModule[mid].tentativeStartDate = mdate; 

                                break;
                            case 0:
                                cout<<"\nThankyou !!!!\n "; 
                                break;
                            
                            default:
                                cout<<"\nInvalid choice..................."; 
                        }
                        
            }
            
            else{
                cout<<"\n :  Module Number Not found...................."<<endl;
                choice2 = 0;
                flag = 1;
            }
                    
        }  
        if(flag != 1){
            cout << "Updated Module Records ...................." << endl;
            displayModuleDetails( mpModule);
            }          
    }

