#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<< "tell me your age "<<endl;
    cin>> age;

   /*
    if (age<18){
        cout <<"you are child "<<endl;
        cout<<"you are in school"<<endl;
    }
    else if (age == 18 ){

        cout << "you have become seneour "<< endl;
    }
    else
    cout<< "you are adalt"<<endl; 
    
    */


switch (age)
{
case 12:
    cout <<"you are 12"<< endl;

    break;

    case 18:
    cout <<"you are 18 "<< endl;
    break;

    case 21 :
    cout<<"you are adalt ";
break;


default:
cout<< "this is not a wright age";
    break;
}
    return 0;

    
} 
