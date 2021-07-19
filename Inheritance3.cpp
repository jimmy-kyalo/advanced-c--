#include <iostream>

using namespace std;

// base class
class Employee {
protected: // protected access specifier
    int salary;
};

// derived class
class Programmer : public Employee {
public:
    int bonus;

    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Programmer obj;
    obj.setSalary(50000);
    obj.bonus = 15000;
    cout << "Salary : " << obj.getSalary() << "\n";
    cout << "Bonus : " << obj.bonus << "\n";
    return 0;
}