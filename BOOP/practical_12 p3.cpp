#include<iostream>
using namespace std;

class Vehical{
    public:
        void Calcmilage(){
            cout << "this is vehical milage";
        }
};

class twoWheeler : public Vehical
{
    public:
        void Calcmilage(){
            cout << "this is twowheeler";
        }
};

class bicycle : public twoWheeler
{
    public:
    
}
int main()
{
   return 0;
}