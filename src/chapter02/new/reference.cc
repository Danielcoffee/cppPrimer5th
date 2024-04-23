#include <iostream>

using namespace std;

int main() {
  int ival = 1024;
  int& refVal = ival; // change value when ival change1
  int& refVal2 = refVal;
  cout << "Before" << endl;
  cout << "&refVal: " << &refVal << endl; //
  cout << "refVal: " << refVal << endl;
  ival = 10;
  cout << "After" << endl;
  cout << "&refVal: " << &refVal << endl; //
  cout << "refVal: " << refVal << endl;
  cout << "refVal2: " << refVal2 << endl;
  cout << "&refVal2: " << &refVal2 << endl;

  return 0;
}
