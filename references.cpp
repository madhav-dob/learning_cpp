#include <iostream>
using namespace std;

int main(){
    string word = "Madhav";
    string &ref  = word;

    cout << word << "\n";
    cout << ref << "\n";

    ref = "sushant";
    
    cout << word << "\n";
    cout << ref << "\n";
}