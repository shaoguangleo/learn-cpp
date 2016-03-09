#include <iostream>

int main() {
    using namespace std;

    int i = 10;
    float f = 10.0;
    double d = 10.0;

    cout << "Address of " << i << " is " << &i << endl;
    cout << "Address of " << f << " is " << &f << endl;
    cout << "Address of " << d << " is " << &d << endl;

    return 0;
}