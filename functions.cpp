#include <iostream>
using namespace std;

int sum(int a,int b) {
    int s = a+b;
    cout << "function 1" << "\n";
    return s;
}

int sum(int a, int b, int c){
    int s = a+b+c;
    cout << "function 2" << "\n";
    return s;
}

void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;


}

int main(){

    int a = 5;
    int b = 6;
    int c = 7;

    int add = sum(a,b);
    cout << add << "\n";

    int add2 = sum(a,b,c);
    cout<< add2 << "\n";


    // swaping the nums :
    cout << "In the swaping section." << "\n";
    int x = 2;
    int y =7;
    cout << "nums before swaping : " << "\n";
    cout << x << " " << y << "\n";
    swap(x,y);
    cout << "Nums after swap : " << "\n";
    cout << x <<  " "<< y << "\n";



}