#include <iostream>
using namespace std;
/*

case 1 :
class B : class A {
 // order of execution of constructor -> first A() then B()
};

case 2 :

class A : public B , public C {
// order of execution of constractor -> B() then C() after that A()
};

case 3:

class A : public B ,virtual public c {
// order of execution of constractor -> C() then B() after that A()
};

*/

class Base1
{

    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "base class constrateris called";
    }

    void printDatabase1()
    {
        cout << "the value of data1 is : " << data1 << endl;
    }
};

class Base2
{

    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base class constrateris called";
    }

    void printDatabase2()
    {
        cout << "the value of data1 is : " << data2 << endl;
    }
};

class derive : public Base1, public Base2
{
    int derive1, derive2;

public:
    derive(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derive1 = c;
        derive2 = d;

        cout << "derived class constractor callled " << endl;
    }
    void printdataderived()
    {
        cout << "the value of derive1 is " << derive1 << endl;
        cout << "the value of derive 2 is : " << derive2 << endl;
    }
};

int main()
{
    derive S1 (3,4,5,6);
    S1 . printDatabase1();
    S1.printDatabase2();
    S1.printdataderived();
    return 0;
}