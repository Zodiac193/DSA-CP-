#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // a < b
    // a become 3*a after every year
    //  how many years to become
    // a > b
    cin >> a >> b;
    // output number of years to result in a > b
    int a_multiplier = 3, b_multiplier = 2;
    int year_count = 0;
    while (a < b || a == b)
    {
        a *= a_multiplier;
        b *= b_multiplier;
        year_count++;
    }
    cout << year_count;

    return 0;
}