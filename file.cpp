#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){


    
  string st; 
  //reading a file using constracter and reading it 

  ifstream in ("sample60b.txt");
in>> st;
  
  //getline(in , st);
  cout<<endl << st ;

  // Opening files using constructor and writing it

  string st2 = "happy brithday sahil bhai ";

  ofstream out ("sample60.txt") ;

  out << st2 ; 


    return 0;
}