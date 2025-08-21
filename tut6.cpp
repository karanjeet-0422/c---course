// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>

// 2. User Defined Header files: It is written by the programmer
// #include"This.h" --> This will produce an error if This.h is not present in the current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<< "Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl; // cout a and then increase by 1
    cout<<"The value of a -- is "<<a--<<endl; // cout a and then decrease by 1
    cout<<"The value of ++ a is "<<++a<<endl; // increase by 1 and then cout
    cout<<"The value of -- a is "<<--a<<endl; // decrease by 1 and then cout
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd'

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b "<<(a==b)<<endl;
    cout<<"The value of a != b "<<(a!=b)<<endl;
    cout<<"The value of a > b "<<(a>b)<<endl;
    cout<<"The value of a < b "<<(a<b)<<endl;
    cout<<"The value of a <= b "<<(a<=b)<<endl;
    cout<<"The value of a >= b "<<(a>=b)<<endl;

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}
