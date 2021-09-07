#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass
  myObj.myNum = 18;
  myObj.myString = "pavan kumar";
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  
  MyClass myObj1;  // Create an object of MyClass
  myObj1.myNum = 18;
  myObj1.myString = "pavan kumar";
  cout << myObj1.myNum << "\n"; 
  cout << myObj1.myString; 
  return 0;
}