#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gradebook1("Introduction to c++ programming");
    GradeBook gradebook2("Data structures in c++");

    cout << "gradebook1  created for course: " << gradebook1.getCourseName();
    cout << "\ngradebook1  created for course: " << gradebook2.getCourseName()
    <<endl;

    return 0;
}