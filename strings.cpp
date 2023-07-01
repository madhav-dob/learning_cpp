#include <iostream>
#include <string>
using namespace std;
int main() {

string string1 = "Namaste ";
string string2 = "Ji";

cout << "string1 : " << string1 << "\n";
cout << "string2 : " << string2 << "\n" ;

string joinedString = string1 + string2 ;
cout << "Joined String : " << joinedString << "\n";

string appendString = string1.append(string2) ;
cout << "Appended String : " << appendString << "\n";

cout << "Size of Joined String : " << joinedString.size() << "\n";

cout << "FIrst element : " << joinedString[0] << '\n';

joinedString[0] = 'H';

cout << "Modified String : " << joinedString << '\n' ;

string inputString ;
cout << "Enter your answer : ";
getline( cin, inputString);
cout << "Your answer is : " << inputString << '\n';
 
}