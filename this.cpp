#include<iostream>
using namespace std;
class A {
    int a ; 

    public : 

    void setData ( int a ){
       this -> a = a ; 
    }
    void getdata (){
        cout << "the value of a is " << a << endl ; 
    }
};

// this pointer also return reference to the invoking object. 
// because this is  implicit pointer ;

class B {
    int b ;

    public : 
 
  B & setData ( int b ){
       this -> b = b; 
       return *this ; 
    }

    void getdata (){
        cout << "the value of b is " << b << endl ; 
    }
};
int main(){

    A  a1 ; 
    a1.setData(2);
    a1. getdata();

B b1 ; 
b1.setData(4 ) . getdata();
    
    return 0;
}