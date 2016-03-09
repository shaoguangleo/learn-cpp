#include <iostream>

int main() {
    using namespace std;

    double * p3 = new double [3];
    p3[0] = 0.0;
    p3[1] = 0.1;
    p3[2] = 0.2;

    cout << "Now p3[0] is " << p3[0] << endl;
    cout << "Now p3[1] is " << p3[1] << endl;
    cout << "Now p3[2] is " << p3[2] << endl;

    return 0;
}
