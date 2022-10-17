// 17 October 2022 Abduganiev Abdullokh
// w3schools Practice
// 5. Write a program in C++ to check the upper and lower limits of integer.
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    cout << "Check the upper and lower limits of Data types in C++"  << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "int MAX value:                    "   << INT_MAX     << endl;
    cout << "int MIN value:                    "   << INT_MIN     << endl;
    cout << "unsigned int MAX value:           "   << UINT_MAX    << endl;
    cout << "Long Long MAX value:              "   << LLONG_MAX   << endl;
    cout << "Long Long MIN value:              "   << LLONG_MIN   << endl;
    cout << "unsigned Long Long MAX value:     "   << ULLONG_MAX  << endl;
    cout << "BITS in char:                     "   << CHAR_BIT    << endl;
    cout << "Char MAX value:                   "   << CHAR_MAX    << endl;
    cout << "CHar MIN value:                   "   << CHAR_MIN    << endl;
    cout << "Signed Char MAX value:            "   << SCHAR_MAX   << endl;
    cout << "Signed Char MIN value:            "   << SCHAR_MIN   << endl;
    cout << "Unsigned Char MAX value:          "   << UCHAR_MAX   << endl;
    cout << "Short data MAX value:             "   << SHRT_MAX    << endl;
    cout << "Short data MIN value:             "   << SHRT_MIN    << endl;
    cout << "Unsigned short data MAX value:    "   << USHRT_MAX   << endl;

    return 0;
}
