#include<iostream>
using namespace std;

class Number{
    int A,B;

    public:
    Number(int n1, int n2);
    Number(Number &n);
    void showdata(){
        cout << "value of A = "<<A<<endl;
        cout << "value of B = "<<B<<endl;
    }
};
Number :: Number (int n1, int n2)
{
    A = n1;
    B = n2;
}
Number :: Number (Number &n)
{
    A = n.A;
    B = n.B;
}
int main ()
{
    Number n1(20,30);
    Number n2(n1);
    n1.showdata();
    n2.showdata();
    return 0;
}
