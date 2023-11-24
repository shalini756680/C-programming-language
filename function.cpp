#include<iostream>

using namespace std;

int recfunc(int n ){
if (n == 0){

    return 1;
}
int fact = n*recfunc(n-1);
return fact;

}

int main (){
    int a =5;
   int fact = recfunc(a);
   cout << fact ;

   
    return 0;

}