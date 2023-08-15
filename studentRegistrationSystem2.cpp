

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include<limits>

using namespace std;

class Student{
    public:
    
    int studId;
    string studName;
    string bloodGrp;
    string studAddress;
    string dateOfBirth;
    
    void addStudentRecord(map<int, Student>& mp){
       
        cout <<"\nEnter Student ID: ";
        cin >> studId;
        cin.sync();
        
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
    
    void updateStudentRecord(map<int, Student>& mpStudent){
         cout<<"\n# Update Student Record \n";
        int StdNo;

        cout<<"\nEnter Std No : ";
        cin>>StdNo;
        //return StdNo;
        int choice2 = -1;
       
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

                        int choice2;
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
                            cout<<"\nInvalid choice.."; 
                        }
                        
            }
                
            else cout<<"\n : ID Not found"<<endl;
            choice2 = 0;
        }
        
        //if student ID record exists then 
        //ask user which details need to be updated
        //update those details for given ID
    }
    
    void displayStudentRecord(map<int, Student> mp){
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
    
    /*Student() {
        addStudentRecord();
    }*/
};

//course
class Module{
    public:
     int moduleNo;
     string moduleName;
     int duration;//in months
     float fees;
     string tentativeStartDate; // date is taken here as string and will be changed into Date type when connecting with DB.
     
     void addModule(map<int, Module>& mp){
        cout << "\nEnter Module No.: "<<endl;
        cin >> moduleNo;
        cin.sync();
        
        cout << "\nEnter Name: " <<endl;
        getline(cin, moduleName);
        
        cout << "\nEnter Duration: "<<endl;
        cin >> duration;
        
        cout << "\nEnter Fees: Rs.";
        cin >> fees;
        cin.sync();

        cout << "\nEnter Tentative Start Date: "<<endl;
        getline(cin, tentativeStartDate);
        
        
         mp.insert({this->moduleNo, *this});
     }
     
     void displayModuleDetails(map<int, Module> mp){
        
         map<int, Module>:: iterator it3;
         
        it3 = mp.begin();
                while (it3 != mp.end())
                  {
                    cout <<  "Module No.: "<< it3->second.moduleNo << "\t "<<  "Module Name: "<<  it3->second.moduleName <<"\t "<< "Duration: "<<  it3->second.duration <<"\t " << "Fees: " <<  it3->second.fees <<"\t "<< "Tentative start Date: " <<  it3->second.tentativeStartDate <<endl;
                    //cout <<"Inside display fn"<<endl;    
                    //it->second.displayStudentRecord();
                    it3++;
                }
       
        
     }
     
    void updateModule(map<int, Module> &mpModule){
        cout<<"\n# Update Module Record \n";
        int mid;

        cout<<"\nEnter Module No : ";
        cin>>mid;
        //return moduleNumber;
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
                                cout<<"\nInvalid choice.."; 
                        }
                        
            }
            
                    else{
                        cout<<"\n :  Module Number Not found..."<<endl;
                        choice2 = 0;
                    }
                    
        }            
    }
};


int main()
{
    
    map<int, Student> mpStudent;
    map<int, Module> mpModule;
    
    Student st;
    Module mod;
    
    map<int, Student>:: iterator it;
    map<int, Module>:: iterator it2;
    map<int, Student>:: iterator it3;
    
    int id, mid;
    int choice = -1;

    while(choice !=0)
    {
        //system("cls");
        
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
                //st = new Student();
                 st.addStudentRecord(mpStudent);
                break;
            case 2:
                st.displayStudentRecord(mpStudent);
                
         /*
        it3 = mpStudent.begin();
                while (it3 != mpStudent.end())
                  {
                    cout <<"hell";
                    cout <<  "Student ID: "<< it3->second.studId << "\t "<<  "Name: "<<  it3->second.studName <<"\t "<< "Blood Group: "<<  it3->second.bloodGrp <<"\t " << "Address: " <<  it3->second.studAddress <<"\t "<< "DOB" <<  it3->second.dateOfBirth <<endl;
                    cout <<"Inside display fn"<<endl;    
                    //it->second.displayStudentRecord();
                    it3++;
                }
         */       break;
           
            case 3: 
                //UPDATE STUDENT RECORD
                 st.updateStudentRecord(mpStudent);
                
                 /*for (auto itr3 = mpStudent.find(id); itr3 != mpStudent.end(); itr3++) {
        
                cout << itr3->first << '\t' << itr3->second.studName << '\n';
                }*/
  
            
            break;
            
            case 4:
                //Add Module
                mod.addModule(mpModule);
                /*mpModule.insert({mod.moduleNo, mod});
                */
                break;
           
            case 5: 
           //Display All Modules;
            mod.displayModuleDetails(mpModule);
            /* it2 = mpModule.begin();
                for(;it2 != mpModule.end();it2++){
                    it2->second.displayModuleDetails();
                }
              */  
            break;
            
            
            case 6: 
           //UPDATE MODULE RECORD
                mod.updateModule(mpModule);
                
            break;
            
            case 0:
            cout<<"\nThankyou !! Good Bye\n "; 
            break;
            default: 
                cout<<"\nInvalid choice.."; 
                //getchar(); 
        }
    }
    
    return 0;
}
