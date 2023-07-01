#include <iostream>
using namespace std ;

int main(){

    // a variable named car with a value honda.
    string car = "Honda" ;
    // A pointer variable ptr that stores the address of car.
    string* ptr = &car;   // there are two other ways to declare a pointer variable : string *ptr, string * ptr 

    
 
    //printing the values of both.
    cout << car << "\n";
    cout << &car << "\n"; // printing the address of the variable car.
    cout << ptr << "\n"; // printing the address stored in the pointer variable.
    cout << *ptr << "\n"; // derefrencing the vallue from the pointer variable.
    cout << &ptr << "\n"; // printing the address of the pointer variable.    



    // modifing the pointers.

    *ptr = "Tata";
    // printing the modified values :

    cout << *ptr << "\n"; // derefrencing the vallue from the pointer variable.
    cout << car << "\n"; // changing the value at memory location also changes the value of the variable. 
}