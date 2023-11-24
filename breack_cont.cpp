#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 6 ;i++)
    {
        cout<< i <<endl;
        if (i==4)
        {
          break;
        }
        
    }
    
    cout <<"the next is "<<endl;

    for (int j= 0; j < 5; j++)
    {
        
        if (j==3){
            continue;
        }
        cout<< j <<endl;
    }
    
    return 0;
}