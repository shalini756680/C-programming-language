#include <iostream>
using namespace std;
class shop
{
    int item[100];
    int price[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setprice();
    void getprice();
};

void shop ::setprice()
{
    cout << "enter the price of item " << endl;
    cin >> item[counter];
    cout << "enter the price of price  " << endl;
    cin >> price[counter];

    counter++;
}

void shop ::getprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item " << item[i] << "is " << price[i];
        cout << endl;
    }
}
int main()
{
    shop s1, s2, s3;
    s1.initcounter();
    s1.setprice();
    s1.getprice();
    s1.setprice();
    s1.getprice();
    s1.setprice();
    s1.getprice();

    return 0;
}