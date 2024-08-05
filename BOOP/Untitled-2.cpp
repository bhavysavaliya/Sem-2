#include<iostream>
using namespace std ;

class Base {
public:
    void showaddresss() {
        cout << this << endl;
    }
};
class Dog : public Animal {
public:
    void showaddresss() {
        cout << this << endl;
    }
};


int main() {
    Animal a1;
    Dog b1;

    a1.showaddresss();
    b1.showaddresss();

    return 0;
}