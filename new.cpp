#include<iostream>
using namespace std;
 

 
int main(){
    // basic example 
    //int a = 4;
   // int *ptr = &a ;

    //cout << "THE VALUE OF A IS "<< *(ptr) << endl ;

    // use the new keyword 

    int * ptr = new int (4);
    
    cout << "THE VALUE OF A IS "<< *ptr << endl ;

    



     
    return 0;
}