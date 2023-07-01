#include <iostream>
using namespace std;

struct {
    string company;
    string model;
    int ram ;
    string storage;
} laptop ;

struct phone {
    string company;
    string model;
    int ram;
    int battery_mah;
};

int main (){

    laptop.company = "dell";
    laptop.model = "inspiron";
    laptop.ram = 16;
    laptop.storage = "1 TB";
    
    cout << "Laptop : "<< "\n";
    cout << "company : " << laptop.company << "\n";
    cout << "Model : " << laptop.model << "\n";
    cout << "Ram : " << laptop.ram << "\n";
    cout << "Storage : " << laptop.storage << "\n";
    cout << "\n";

    phone mobile1, mobile2;

    mobile1.company = "Samsung";
    mobile1.model = "F41";
    mobile1.ram = 6;
    mobile1.battery_mah = 5000;

    cout << "Mobile Phone 2 : "<< "\n";
    cout << "company : " << mobile1.company << "\n";
    cout << "Model : " << mobile1.model << "\n";
    cout << "Ram : " << mobile1.ram << "\n";
    cout << "Battey : " << mobile1.battery_mah << "\n";
    cout << "\n";

    mobile2.company = "OnePlus";
    mobile2.model = "10R";
    mobile2.ram = 8;
    mobile2.battery_mah = 5500;

    cout << "Mobile Phone 2 : "<< "\n";
    cout << "company : " << mobile2.company << "\n";
    cout << "Model : " << mobile2.model << "\n";
    cout << "Ram : " << mobile2.ram << "\n";
    cout << "Battey : " << mobile2.battery_mah << "\n";
    cout << "\n";



}