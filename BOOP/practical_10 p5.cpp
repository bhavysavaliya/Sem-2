#include <iostream>
using namespace std;

class Sample
{
    public:
    Sample(){
        cout << "constructor is invoked"<<endl;
    }
    ~Sample()
    {
       cout << "Destructor is invoked"<<endl;
    }
};

int main() {
    Sample s1;
    return 0;
}