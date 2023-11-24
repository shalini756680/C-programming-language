#include<iostream>
using namespace std;

int c = 43;   // GLOBAL VARIABLE

int main(){
int a = 1 ;    // local variabals

cout<<"enter the value of a :" << a <<endl;
int b = 2;
cout<<"enter the value of b:" << b <<endl;


int c = a+b;
    cout<<"i am saransh sahu\n";
    cout<< a <<endl<< b<<endl;

    cout<<"the value of c is "<< c<<endl;
    cout<<"the globle is "<< ::c;   //for display the globle variable
    return 0;
}