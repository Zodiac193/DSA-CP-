#include <iostream>
using namespace std;

int main()
{
    // input
    int numOfFriends, fenceHeight;

    int *friends_h;
    friends_h = new int[numOfFriends];

    cin >> numOfFriends;

    cin >> fenceHeight;
    for (int i = 0; i < numOfFriends; i++)
    {
        cin >> friends_h[i];
    }

    // processing
    int RoadTotalW = 0;
    for (int i = 0; i < numOfFriends; i++)
    {
        if (friends_h[i] <= fenceHeight)
        {
            RoadTotalW += 1;
        }
        else
        {
            RoadTotalW += 2;
        }
    }

    // output "Minimum Possible Valid Width of the road "
    cout << RoadTotalW << endl;

    delete friends_h;

    // return
    return 0;
}
