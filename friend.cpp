#include<iostream>
using namespace std;
 class compelex {
    int a ,b ;
    friend int  printnumber(compelex O1, compelex O2 );
    public :
    void setnumber(int x ,int y ){
        a = x ;
        b = y ; 
    }
    void getdata() {
        cout << a << "and " << b << endl ; 


    }
 };


 int  printnumber(compelex O1, compelex O2 ){
 int a3;
    a3 = O1.a + O2.a;


}
int main(){
    compelex c1,c2 ; 
  
    c1.setnumber(2 ,3);
    c1. getdata();

      c2.setnumber(3 ,6);
    c2. getdata();

     int  sum = printnumber(c1  ,c2);

     cout << "the value of sum is : " << sum << endl; 



    return 0;
}