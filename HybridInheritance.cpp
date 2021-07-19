#include <iostream>

using namespace std;

// base class
class Vehicle{
        public:
        Vehicle(){
            cout << "This is a vehicle.\n";
        }
};

// base class
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle.\n";
    }
};

// sub class 1
class Car : public Vehicle {
};

// sub class 2
class Bus : public Vehicle , public Fare {
};

int main() {
    Bus obj2;
    return 0;
}