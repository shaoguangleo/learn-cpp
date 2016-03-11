#include <iostream>
#include <fstream>

int main() {
    using namespace std;

    ofstream outfile;
    outfile.open("info.txt");

    cout << "How old are you? " << endl;
    int age;
    cin >> age;
    outfile << "You are " << age << " years old."<<endl;

    outfile << age ;

    outfile << 12.34 << endl;

    outfile.close();

    return 0;
}
