#include <iostream>
using namespace std ;

int main(){

    string items[3] = {"cars", "laptop" , "tools"};
    int nums[4] = {1, 2, 3, 4};

    // accessing the items of array.
    cout << "items : " << "\n";
    for (int i =0; i < 3; i++){
         cout << items[i] << " ";
    }
   
    cout << "nums : " <<  "\n";
    for (int y =0; y < sizeof(nums) / sizeof(int); y++){
        cout << nums[y] << " ";
    }


    cout << "first element of array : " << items[0] << "\n";
    cout << "sec element of array : " << nums[1] << "\n";

    // changing elements of array.

    items[2] = "video";
    nums[1] = 5;

    // accessing the items of array.
    cout << "items : " << "\n";
    for (int i =0; i < 3; i++){
         cout << items[i] << " ";
    }
   
    cout << "nums : " <<  "\n";
    for (int y =0; y < 4; y++){
        cout << nums[y] << " ";
    }
    // declaring an array  without soecifying  size of the array.
    string newArray1[] = {"Fanta" , "Coca Cola", "Pepsi", "Sprite"};
    cout << "newArray1 : " << "\n";
    for (int a =0; a < sizeof(newArray1)/sizeof(string) ; a++) {
        cout << newArray1[a] << ",";

    }
  
    
    // declaring array and declaring elements later.
    string newArray2[3];
    newArray2[0] = "daal chawal";
    newArray2[1] = "kadi chawal";
    newArray2[2] = "rajma chawal";
    
    cout << "newArray2 : " << "\n";
    for(int i =0; i< sizeof(newArray2)/sizeof(string) ; i++){
        cout << newArray2[i] << ",";
    }
    
}