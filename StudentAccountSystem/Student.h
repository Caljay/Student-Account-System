#pragma once
#include "string"
using namespace std;
/*

student needs:

unique ID
Password - to access info
overall GPA
current classes + grades






*/
struct Name {

     string firstName;
     char middleInitial;
     string lastName;


};
struct Class {

};
class Student
{

     int id;
     string password;

public:
     Class myClass;
     Name studentName;

     //name uses structs?

     

public:
    
     Student(string _firstName, char _middleInitial, string _lastName);
     
     //set password, possibly only 1 time use
     void SetPassword();
    


};

