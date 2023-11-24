#include<iostream>
using namespace std;

int main(){
    //what is pointer  --> data type which holds the addresss of otherdatatypes

    int a = 3;
    int*b = &a;  // & -->address of operator
                  // * --> dereference operater

     cout<< b << endl ;
     cout<< *b << endl;                  
    return 0;
}