// hexoct.cpp -- 1.shows hex and octal literal.
//               2.display values in hex and octal
#include<iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (42 in hex)\n";
    cout << "inseam = " << inseam << " (42 in octal)\n";
    cout << "----------------------------------------\n";
    cout << "display values in hex and octal" << endl;
    cout << hex;
    cout << "waist = " << chest << " (hexadecimal for 42)\n";
    cout << oct;
    cout << "inseam = " << chest << " (octal for 42)" << endl;
    return 0;
}