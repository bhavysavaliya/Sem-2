#include<iostream>
using namespace std;

class Distance{
    int Feet,Inches;

    public:
    Distance();
    Distance(int Feet, int Inches);

    void showdata(){
        cout << Feet << " feet  "<< Inches << " inches " << endl;
       
    }
};
Distance :: Distance(){
    Feet = 0;
    Inches = 0;
}

Distance :: Distance (int feet, int inches)
{
    Feet = feet;
    Inches = inches;
}
int main ()
{
    Distance d1;
    Distance d2(5,9);
    d1.showdata();
    d2.showdata();
    return 0;
}
