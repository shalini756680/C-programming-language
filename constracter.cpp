#include<iostream>
using namespace std;
class student 
{
private:
    int a;
    float b ;
    char c;
public:

    student();
    
    ~student (){
        cout<< "the distracter is called";
    };
};
student :: student(){
    a = 1;
    b = 3.4; 
    c ='$' ; 

    cout << " the number is " << a << " the desimal number is :" << b << "the charater is "<< c << endl;

}



int main(){
     student stu;
   
    return 0;
}