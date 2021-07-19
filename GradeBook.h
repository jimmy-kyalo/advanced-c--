#include <iostream>
#include <string>

using namespace std;

class GradeBook {
public:
    GradeBook(string name) {
        setCourseName(name);
    }

    void setCourseName(string name) {
        courseName = name;
    }

    string getCourseName() {
        return courseName;
    }

    void displayCourseName() {
        cout << "Welcome to the gradebook for\n" << getCourseName() << "!" << endl;
    }

private:
    string courseName;
};