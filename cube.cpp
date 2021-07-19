#include <iostream>

using namespace std;

class Box {
private:
    double width;
    double height;
    double depth;
    float volume;

public:
//default constructor
    Box() {
        width = 10;
        height = 10;
        depth = 10;
    }

//parameterised constructor
    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    void calculateVolume() {
        volume = width * height * depth;
    }

    void displayVolume() {
        cout << "The volume of the object is : " << volume << " m^3" << endl;
    }

//    destructor
    ~Box() {
//        cout << "Deconstructor called" << endl;
        return;
    }
};

int main() {
    Box cube;
    cube.calculateVolume();
    cube.displayVolume();

    Box box(2, 3, 5);
    box.calculateVolume();
    box.displayVolume();

    //this creates same_box object with values same as that of box
    Box same_box(box);
    box.calculateVolume();
    box.displayVolume();

    return 0;
}