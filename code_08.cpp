#include<iostream>
#include<iomanip>
using namespace std ; 

int main(){

    // constant in c++ 

    //const int a = 3;
    // cout<< "the value of a is : " << a <<endl;
     //a = 45;       // it will through an error because a is constant 
    //  cout<< "the value of a is : " << a <<endl;

    int a =3 , b = 78, c = 1233;

    cout<< "the value of a without setw is "<<a<< endl;
    cout<<"the value of b without setw is "<<b<< endl;
    cout<<"the value of c is without setw is "<<c << endl;

    cout<<"the value of a is "<<setw(4)<<a<<endl;
    cout<<"the value of B is " <<setw(4)<< b << endl;
     cout<<"the value of c is "<<setw(4)<<c<<endl;

     return 0;

     
}