#include <iostream>
using namespace std;

class Employee{
    protected:
    int salary;
};

class derived_class : public Employee{
    public:
        int bonus;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};


int main(){

    derived_class myObj;
    myObj.bonus = 3000;
    myObj.setSalary(15000);
    cout << myObj.getSalary();

}