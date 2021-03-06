#include "Stack.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    if(argc < 1)
    {
        cout << "Required a parameter" << endl;
    }
    ifstream in(argv[1]);
    Stack textlines;
    string line;
    while (getline(in,line))
        textlines.push(new string(line));
    string *s;
    while ((s = (string*)textlines.pop()) != 0)
    {
        cout << *s << endl;
        delete s;
    }
}
