#include <iostream>

int main() {
    using namespace std;

    int * pt = new int ;//allocate space for an int 
    * pt = 1000;

    double *pd = new double;
    *pd = 12.45;

    cout << "Address of *pt " << *pt << " is " << pt << endl;
    cout << "Address of *pd " << *pd << " is " << pd << endl;

    return 0;
}
