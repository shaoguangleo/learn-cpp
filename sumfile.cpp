#include <iostream>
#include <fstream>

int main() {
    using namespace std;

    ifstream infile;

    double sum;
    double value;
    int cnt = 0;
    const int size = 100;

    char filename[size];

    cout << "Enter name of data file: ";
    cin.getline(filename,size);

    infile.open(filename);

    if(!infile.is_open())
    {
        cout << "Could not oen the file " << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }

    infile >> value;
    while (infile.good())
    {
        ++cnt;
        sum += value;
        infile >> value;
    }

    if (infile.eof())
        cout << "End of file reached\n";
    else if (infile.fail())
        cout << "Input terminated by data mismatch" << endl;
    else
        cout << "Input terminated for unknown reason\n";

    if (cnt == 0)
        cout << "No data processed" << endl;
    else
    {
        cout << "Items read :\t" << cnt << endl;
        cout << "Sum        :\t" << sum << endl;
        cout << "Average    :\t" << sum / cnt << endl;
    }

    infile.close();


    return 0;
}
