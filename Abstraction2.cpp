#include <iostream>
using namespace std;

class Abstraction2{
private:
    int num;
    char ch;
public:
    void setMyValues(int n, char c){
        num=n;ch=c;
    }
    void getMyValues(){
        cout<<"Numbers is : "<< num<<endl;
        cout<<"Char is : "<< ch<<endl;
    }
};

int main(){
    Abstraction2 obj;
    obj.setMyValues(100, 'X');
    obj.getMyValues();
}