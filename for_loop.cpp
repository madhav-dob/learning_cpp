#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i <5; i++){
        cout<< "Namaste !" << "\n";
    }

    int numList[4] = {12,13,14,15};
    for (int i : numList){
        cout << i << "\n";
    }



}
