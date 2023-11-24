#include<iostream>
#include<fstream> 
using namespace std;

int main(){
// declaring an object of the type ofstream 

ofstream out ;
out.open("sample60.txt");
out<< "this my car \n ";
out<< "I aways drive it ";

//close the file connection 

out.close();
string st ;
ifstream in ;
in.open("sample60b.txt");

while(in.eof() == 0){
// reading a file 
getline(in,st);
cout << st <<endl;
}

    return 0;
}