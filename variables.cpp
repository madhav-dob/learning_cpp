#include <iostream>
using namespace std;

int main(){
    //Declaring a simple variable :
    int myNum = 13;
    
    // Now printing the var
    cout << myNum << "\n";

    // changing and printng the value of the var.
    myNum = 45;
    cout << myNum << "\n";

    // another way of declaring:
    int mySecondNum;
    mySecondNum = 90;
    cout << mySecondNum << "\n"; 

    // Simple addtion of two vars :

    int sum = myNum +mySecondNum;
    cout<< sum << "\n" ;
 
    // constant value variable (read-only variable) declarations :
    const int numOfDays = 365;
    // numOfDays = 366;  this line would cause error.
    cout << numOfDays << "\n";
    return 0;
}
