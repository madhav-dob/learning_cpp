#include <iostream>
using namespace std;

// in this file we make methods in classes.

class fruits{
    public:
    //this is a constructor of the class.
    fruits(){
        cout << "inside fruits class." << "\n";
    }

    string name;
    void weight(int a){
        cout << "the weight of " << name << " is " << a << "."<< "\n"; 
    }

};

int main(){
    fruits fruit1 , fruit2;
    fruit1.name = "apple";
    fruit1.weight(2);

    fruit2.name = "pears";
    fruit2.weight(5);

}