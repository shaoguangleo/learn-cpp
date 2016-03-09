#include <iostream>

int main() {
    using namespace std;

    union one_in_four
    {
        char char_var;
        int int_var;
        float float_var;
        double double_var;
    };

    one_in_four temp;

    temp.char_var = 'A';
    cout << temp.char_var << endl;

    temp.int_var = 1;
    cout << temp.int_var << endl;

    temp.float_var = 1.2345;
    cout << temp.float_var << endl;

    temp.double_var = 1.2345;
    cout << temp.double_var << endl;

    return 0;
}