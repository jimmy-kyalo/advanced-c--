#include <iostream>

using namespace std;

// base class 1
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.\n";
    }
};

// base class 2
class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class.\n";
    }
};

// derived class
class MyChildClass : public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass obj;
    obj.myFunction();
    obj.myOtherFunction();
    return 0;
}