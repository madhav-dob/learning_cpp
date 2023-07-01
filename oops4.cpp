#include <iostream>
using namespace std;

class vehicle{

    public:
        string brand = "TATA";
        void honk(){
            cout << " Paauu Paauu !" << "\n";
        }
};

class Car : public vehicle{
    public:
        string model = "Harrier";
};

class Truck : public vehicle{
    public:
        string model = "Sigma";
};

int main(){

    Car carObj;
    cout << carObj.brand << "\n";
    cout << carObj.model << "\n";
    carObj.honk();

    Truck truckObj;
    cout << truckObj.brand << "\n";
    cout << truckObj.model << "\n";
    truckObj.honk();


}
