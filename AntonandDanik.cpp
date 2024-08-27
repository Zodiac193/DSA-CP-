#include <iostream>
using namespace std;

int main()
{
    int num_of_games;
    cin >> num_of_games;
    string outcome;
    outcome.resize(num_of_games); // A or D
    int total_Anton = 0,
        total_Danik = 0;
    cin >> outcome;
    for (int i = 0; i < num_of_games; i++)
    {
        outcome[i] == 'A' ? total_Anton += 1 : total_Danik += 1;
    }
    if (total_Anton > total_Danik)
    {
        cout << "Anton";
    }
    else if (total_Danik > total_Anton)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}