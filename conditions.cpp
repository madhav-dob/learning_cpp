#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 7;
    if (x == 5){
        cout << "I am here." << "\n";
    }
    else if (y == 7){
        cout << "I am here 2." << "\n";

    }

    int m = 5;
    switch(m){
        case 4 :
        cout << "value is 4.";
        break;
    
        case 5 :
        cout << "value is 5.";
        break;
        
        case 6 :
        cout << "value is 6.";
        break;
    }
    
}