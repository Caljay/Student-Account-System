#include <iostream>

#include "Student.h"

int main()
{

     Student myStudent("Calvin", 'J', "Hubbard");

     std::cout << myStudent.studentName.firstName << myStudent.studentName.middleInitial << myStudent.studentName.lastName;
     std::cout << sizeof(myStudent.myClass);

     getchar();
     getchar();
}

