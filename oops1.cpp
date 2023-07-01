#include <iostream>
using namespace std;

class car {
    public :
    int year;
    string company;
};

int main(){
    car myObj , myObj2;
    myObj.year = 2019;
    myObj.company = "KIA";

    myObj2.year = 2021;
    myObj2.company = "TATA";

    cout << myObj.year << "\n";
    cout << myObj.company << "\n";


    cout << myObj2.year << "\n";
    cout << myObj2.company << "\n";


    return 0;
}