#include <iostream>

using namespace std;

// base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle.\n";
    }
};

// sub class 1
class Car : public Vehicle {
};

// sub class 2
class Bus : public Vehicle {
};

int main() {
    Car obj1;
    Bus obj2;
    return 0;
}