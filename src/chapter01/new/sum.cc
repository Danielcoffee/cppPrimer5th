#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int var = 0;
  cout << "Enter you number to sum (after that press Crtl + D to finish" << endl;
  while (cin >> var)
    sum += var;

  cout << "The sum is: " << sum << endl;
  return 0;
}
