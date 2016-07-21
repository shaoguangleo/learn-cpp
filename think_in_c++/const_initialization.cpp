#include <iostream>

using namespace std;

class Fred
{
    const int size;
public:
    Fred(int sz);
    void print();
    ~Fred();
};

Fred::Fred(int sz) : size(sz) { }

void Fred::print() {cout << size << endl; }

Fred::~Fred() { }

int main()
{
    Fred a(1),b(2);
    a.print();
    b.print();

    return 0;
}
