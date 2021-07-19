#include <iostream>

using namespace std;

// base class
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class" << endl;
    }
};

// derived class(child )
class MyChild : public MyClass {
};

// derived class(grand child)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild obj;
    obj.myFunction();
    return 0;
}