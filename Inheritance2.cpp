#include <iostream>

using namespace std;

// base class Shape
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// base class PaintCost
class PaintCost {
public:
    int getCost(int area) {
        return area * 70;
    }
};

// derived class
class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    cout << "Total Area : " << Rect.getArea() << endl;

    cout << "Total paint cost : Kshs." << Rect.getCost(area) << endl;

    return 0;
}