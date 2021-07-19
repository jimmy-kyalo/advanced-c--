#include <iostream>

using namespace std;

class FunctionOverload {
public:
    void func(int x) {
        cout << "Value of x is : " << x << endl;
    }

    void func(double x) {
        cout << "Value of x is : " << x << endl;
    }

    void func(int x, int y) {
        cout << "Value of x is " << x << " and value of y is " << y << endl;
    }
};

int main() {
    FunctionOverload obj;
    obj.func(23);
    obj.func(3.14);
    obj.func(456, 765);
}