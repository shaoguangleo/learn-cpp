#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int ii=0);
    ~Test();
    void print();
};

Test::Test(int ii):i(ii){ }

Test::~Test() { }

void Test::print()
{
    cout << i << endl;
}

int main()
{
    Test a[100];
    for(int i =0;i<100;i++)
        a[i].print();
    return 0;
}
