#include <iostream>

struct student
{
    char name[20];
    int age;
    float height;
};

int main() {
    using namespace std;

    student zhangsan =
            {"Zhang San",
            12,
            14.5
            };
    student lisi =
            {"Li Si",
             11,
             15.5
            };

    cout << "zhangsan's age is : " << zhangsan.age << endl;
    cout << "lisi's  height is : " << lisi.height  << endl;

    return 0;
}