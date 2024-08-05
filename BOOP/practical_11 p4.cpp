#include<iostream>
using namespace std;

class Base{
    public:
        Base()
        {
            cout << "This is base class constructor" << endl;
        }
};
class Derived : public Base
{
    public:
        Derived()
        {
            cout << "This is derived class constructor";
        }
};
int main(){
    Derived d1;

    return 0;
}