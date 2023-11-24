#include<iostream>
using namespace std;



int main(){


    int *arr = new int [4];
    for (int  i = 0; i < 4; i++)
    {
        arr[i] = i+2;
        cout << "the value of "<<arr[i]<< endl;
    }
    
    
    return 0;
}