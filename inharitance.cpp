#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class derive : public base
{
    // class is being derive publically
    int data3;

public:
    void process();
    void display();
};
void derive ::process()
{
    data3 = data2 * getdata1();
}
void derive ::display()
{
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    derive dre;
    dre.setdata();
    dre.process();
    dre.display();

    return 0;
}