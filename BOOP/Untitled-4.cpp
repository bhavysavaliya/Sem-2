#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream my_file("new.txt");

    my_file <<"Line 1"<<endl;
    my_file <<"Line 1"<<endl;
    my_file <<"Line 1"<<endl;
    my_file.close();
    
   return 0;
}