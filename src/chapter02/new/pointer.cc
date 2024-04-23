#include <iostream>

using namespace std;

int main() {
  int ival = 42;
  int* p = &ival;
  int* ptr = p;

  cout << "ival: " << ival << endl;
  cout << "*p: " << *p << endl;
  cout << "p: " << p << endl;
  cout << "*ptr: " << *ptr << endl;
  cout << "ptr: " << ptr << endl;

  return 0;
}
