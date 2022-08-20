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
struct Course {

     string className;
     char courseCode[6];

     float grade;
     char letterGrade;

     bool pass;
     bool inProgress;




};

struct Name {

     string firstName;
     char middleInitial;
     string lastName;


};

class Student
{

     string id;
     string password;

public:
     Course myClass;
     Name studentName;
private:
     Course allCourses[4];




     

public:
    
     Student(string _firstName, char _middleInitial, string _lastName);
     
     //set password, possibly only 1 time use
     void SetPassword();
     void AddCourses();
    


};

