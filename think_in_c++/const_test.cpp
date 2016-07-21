/*************************************************************************
	> File Name: const_test.cpp
	> Author: 
	> Mail: 
 ************************************************************************/

#include<iostream>
using namespace std;

const int i = 100;
const int j = i + 10;
char buf[j+10];

int main()
{
    cout << "Type a character: ";
    const char c = cin.get();
    const char c2 = c + 'a';
    cout << "c2 is :" << c2 << endl;
}
