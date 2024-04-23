#include <iostream>

using namespace std;

int main() {
  unsigned u = 10, u2 = 42;
  cout << u2 - u << endl;
  cout << u - u2 << endl;

  int i = 10, i2 = 42;
  cout << i2 - i << endl;
  cout << i - i2 << endl;

  
  cout << u2 - i << endl;
  cout << i - u2 << endl;

  // testing
  cout << "This is very long long string "
    "I can put here, nothing wrong" << endl;

  cout << "\7This is Bell \n" << endl;

  return 0;
}
