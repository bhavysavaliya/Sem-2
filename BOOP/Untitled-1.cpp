#include<iostream>
using namespace std;

class Animal 
{
public:
    void eat()
    {
        cout << "I Can eat" << endl;
    }
    void sleep()
    {
        cout << "I Can sleep" << endl;
    }
};
class WaterAnimal : public Animal
{
public:
    void swim()
    {
        cout << "I Can swim" << endl;
    }
};
class Fish : public WaterAnimal
{
public:
    void breath()
    {
        cout << "I Can not breath water outside" << endl;
    }
};
int main()
{
    Fish F1;
    F1.breath();
    F1.eat();
    F1.swim();
    F1.sleep();
    return 0;
}