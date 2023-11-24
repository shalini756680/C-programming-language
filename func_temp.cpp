#include <iostream>
using namespace std;
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg ;
}
template<class T > 
int swaap ( T &a ,T&b )
{
T temp = a ;
a = b; 
b = temp ; 
return a ,b;  
}
int main()
{
int a1 = 2;
int a2 = 3 ; 
cout << "the value of a1 and a2 is : " << a1 << a2 << endl ; 
swaap(a1 , a2); 
cout << "the value of a1 and a2 is : " << a1 << a2 << endl ;
    float a = funcAverage(6, 5.8);
    cout << "the average of these no is : " << a << endl;

    return 0;
}


