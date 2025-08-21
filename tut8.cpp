#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The Value of a was:"<<a;
    // a = 45;
    // cout<<"The Value of a is:"<<a;

    //Constants in C++ (Value of const can not be modified once after they are created)
    // const int x = 3;
    // cout<<"The value of a was: "<<x<<endl;
    
    // Manipulators in C++ (endl, setw(iomanip))

    // int a = 3, b = 78, c = 1233;
    // cout<<"The Value of a without setw is "<<a<<endl;
    // cout<<"The Value of b without setw is "<<b<<endl;
    // cout<<"The Value of c without setw is "<<c<<endl;

    // cout<<"The Value of a is "<<setw(4)<<a<<endl;
    // cout<<"The Value of b is "<<setw(4)<<b<<endl;
    // cout<<"The Value of c is "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}
