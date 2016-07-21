#include <iostream>

using namespace std;

class C{
    int i,j;
public:
    C(int ii,int jj);
    void print();
};

C::C(int ii,int jj)
{
    i = ii;
    j = jj;
}

void C::print() {
    cout << "i " << i << " j " << j << endl;
}

int main()
{
    int a[10] = {0};
    int b[]={1,2,3,4,5};

    cout << "The length of a is " << sizeof(a)/ sizeof(a[0]) << endl;
    cout << "The length of a is " << sizeof(b)/ sizeof(b[0]) << endl;

    struct X1{
        int i;
        float f;
        double d;
        char c;
    };

    X1 x = {1,1.0,1.0,'a'};

    C cc[] = {C(1,2),C(3,4)};

    for (int i = 0;i < sizeof(cc)/sizeof(*cc);i++)
        cc[i].print();


    return 0;
}
