
#include <iostream>

using namespace std;

string global_str;
int global_int;

int main()
{
    int local_int;
    string local_str;

    cout << global_str << endl;   // empty string
    cout << global_int << endl;           // 0

    cout << local_str << endl;    // empty string
    cout << local_int << endl;            // uninitialized, local variable might be initialize

    return 0;
}
