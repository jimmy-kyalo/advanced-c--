#include<iostream>

using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a << " + " << b << " = " << (a + b) << endl;
}

// Overload add for integer and float parameters.
void add(int a, float b) {
    cout << "Sum: " << a << " + " << b << " = " << (a + b) << endl;
}

// Overload add for two floating number parameters.
void print(float a, float b) {
    cout << "Sum: " << a << " + " << b << " = " << (a + b) << endl;
}

int main() {
    print(4, 6);
    print(4, 6.1);
    print(4.6, 9.2);
}