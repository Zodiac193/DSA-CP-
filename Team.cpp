#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n; // num of problems

    if (n <= 0)
    {
        cout << 0;
        return 0;
    }

    vector<int> n0(n), n1(n), n2(n);
    // cout << n0.size();
    // int n0[3], n1[3], n2[3];
    int will_solve = 0;
    int num_of_voters = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> n0[i] >> n1[i] >> n2[i];
        cout << "\n";

        if (n0[i] == 1)
            num_of_voters++;
        if (n1[i] == 1)
            num_of_voters++;
        if (n2[i] == 1)
            num_of_voters++;

        if (num_of_voters >= 2)
            will_solve++;

        num_of_voters = 0;
    }

    cout << will_solve;
    return 1;
}