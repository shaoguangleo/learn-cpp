#include <iostream>
#include <ctime>

int main() {
    using namespace std;

    cout << "Please enter delay seconds : ";
    int delay;
    cin >> delay;
    int cnt = delay;

    cout << "Begining."<< endl;
    clock_t start = clock();
    while (clock() - start < delay * CLOCKS_PER_SEC)
        ;
    cout << "Finished" << endl;

    return 0;
}
