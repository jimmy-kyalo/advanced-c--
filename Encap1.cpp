#include <iostream>

using namespace std;

class Encap1 {
private:
    int num;
    char ch;
public:
    int getNum() const {
        return num;
    }

    char getCh() const {
        return ch;
    }

    void setNum(int num) {
        this->num = num;
    }

    void setCh(char ch) {
        this->ch = ch;
    }
};

int main() {
    Encap1 obj;
    obj.setNum(100);
    obj.setCh('A');
    cout << obj.getNum() << endl;
    cout << obj.getCh() << endl;
}