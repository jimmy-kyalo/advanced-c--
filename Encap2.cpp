#include <iostream>

using namespace std;

class Encap2 {
private:
    int total;
public:
    Encap2(int i = 0) {
        total = i;
    }

    void addNum(int num) {
        total += num;
    }

    int getTotal() {
        return total;
    }
};

int main() {
    Encap2 obj;
    obj.addNum(10);
    obj.addNum(20);
    obj.addNum(30);
    cout << obj.getTotal() << endl;
}