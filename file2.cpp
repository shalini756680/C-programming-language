#include<iostream>
#include<fstream>
using namespace std;

int main(){
   // connecting our file with hout stream 
   ofstream hout ("this.txt");

   //  criating a string and filling it with string entered by the user
string st;
cout << " enter the name :";
cin >> st ; 

hout << st; 
hout.close();
//creating a content string variable and filling it with string present there in the text file
string st2 ; 
ifstream hin("sample60.txt");
//hin>> st2;
getline(hin, st2);

cout<< "file content is " << st2; 

// disconected a file 

hin.close();


    return 0;
}