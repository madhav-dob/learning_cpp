#include <iostream>
using namespace std;

class animals {
    public:
        void animalSound (){
            cout << "the anuimal makes a sound!";

        }

};

class suar : public animals{
    public:
        void animalSound (){
            cout << "Suar does wee wee !" << "\n";
        }
};

class ghoda : public animals{
    public:
     void animalSound (){
        cout << "Ghoda does heeiiii heeiii !" << "\n";
     }
};

int main(){
    suar Suar_obj;
    ghoda ghoda_obj;
    Suar_obj.animalSound();
    ghoda_obj.animalSound();

}