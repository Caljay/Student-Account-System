#include "Student.h"

#include <iostream>



//creates a random id and password
//sets the student name
 Student::Student(string _firstName, char _middleInitial, string _lastName) {

      studentName.firstName = _firstName;      
      studentName.middleInitial = _middleInitial;
      studentName.lastName = _lastName;

      //SetPassword();
  

}
 void Student::SetPassword() {

      string tempPasswordOne;
      string tempPasswordTwo;
      
      std::cout << "Please type in a password" << std::endl;
      std::cin >> tempPasswordOne;  
      std::cout << std::endl << "Please confirm password" << std::endl;
      std::cin >> tempPasswordTwo; 

      if (tempPasswordOne == tempPasswordTwo) {
           std::cout << "Sucess... setting password" << std::endl;
           Student::password = tempPasswordOne;
           tempPasswordOne = "";
           tempPasswordOne = "";
           //exit pass has been set
           return;
      }
      else {
           std::cout << "Error in setting password, try again." << std::endl;

                Student::SetPassword();
      }





      exit(1);
 }
 void Student::AddCourses() {
      
      throw "NotImplementExceptionError";
      
      Course tmpCourse;
      tmpCourse.className = "Class 101";

  
      allCourses[0] =  tmpCourse;
      free(&tmpCourse);
      int amountInArray;
      amountInArray = sizeof(Course);
      int lengthOfArray = sizeof(Student::allCourses) / amountInArray;

 }