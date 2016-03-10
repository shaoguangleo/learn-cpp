#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;

    //display the letter in reverse order
    for (int i= word.length()-1;i>=0;i--)
        cout << word[i];

    cout << endl << "Bye" << endl;
    return 0;
}
