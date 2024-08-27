#include <iostream>;
using namespace std;

int main()
{
    int t, n, k;
    // int *cell_position;
    int size = n * k;
    // cell_position = new int[n * k];

    struct CellsStruct
    {
        bool occupied = 0;
        int pos_i, pos_j;
    };
    CellsStruct *cell = new CellsStruct[size];

    int numOfSets;
    cin >> numOfSets;

    for (int a = 0; a < numOfSets; a++)
    {
        cin >> cell[a].pos_i >> cell[a].pos_j;
    }

    bool occu_Diagonal;
    int diagonal_smm;
    for (int i = 0; i < numOfSets; i++)
    {
        diagonal_smm = cell[i].pos_i + cell[i].pos_j;
        for (int j = 0; j < n; i++)
        {
            for (int k = 0; k < numOfSets; i++)
            {
            }
        }
    }

    return 0;
}
