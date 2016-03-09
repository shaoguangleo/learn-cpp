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

    student classone[2] =
            {
                    {"One",10,10.0},
                    {"Two",20,20.0}
            };

    cout << "One's name is " << classone[0].name << endl;
    cout << "Two's name is " << classone[1].name << endl;


    return 0;
}