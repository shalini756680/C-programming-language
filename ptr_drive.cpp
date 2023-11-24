#include<iostream>
using namespace std;

class Baseclass { 

public : 
int var_base;
void display(){
    cout << " displaing base class var_base variable " << var_base << endl ; 
}

};

class derive_class  : public Baseclass{ 

public : 
int var_derive ;
void display(){
    cout << " displaing base class var_base variable " << var_base << endl ; 
    cout << " displaing base class var_derive  variable " <<var_derive  << endl ; 
}

};



int main(){ 
    Baseclass * base_class_pointer ;
    Baseclass obj_bsae ;
    derive_class obj_derive ;

    base_class_pointer = &obj_derive;  //  Pointing base class pointer to derived class

    base_class_pointer -> var_base = 34; 
// base_class_pointer -> var_derive = 234; //will throw an error  

    base_class_pointer-> display();

    base_class_pointer -> var_base =142; 
    base_class_pointer -> display();

    derive_class * derive_class_pointer  = & obj_derive ;
    derive_class_pointer = &obj_derive;
    derive_class_pointer-> var_base = 4253;
    derive_class_pointer -> var_derive =98;

    derive_class_pointer -> display(); 


    
    return 0;
}