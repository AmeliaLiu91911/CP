#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    const int MAX_INT = 2147483647;
    int t, n, k;
    cin >> n >> k;

    vector<vector<int>> totalMonsters; //totalMonsters[0][] health totalMonsters[1][] damage
    for (size_t i = 0; i < 2; i++) // inputs the data for one test case
    {
        vector<int> tempMonster;
        tempMonster.clear();
        for (size_t j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            tempMonster.push_back(temp);
        }
        totalMonsters.push_back(tempMonster);
    }


    for (size_t i = 0; i < n; i++)
    {
        cout << totalMonsters[0][i]<< " ";
    }
    cout << endl;
     for (size_t i = 0; i < n; i++)
    {
        cout << totalMonsters[1][i]<< " ";
    }
    cout << endl;

    
    //[6][7]
    //[18][5][13][9][10][1]
    //[2][7][2][1][2][6]
    for (size_t i = 0; i < n; i++)
    {
        if((totalMonsters[0][i]-k)<=0) // if damage kills  monster then remove them from total monsters
        {
            totalMonsters[0][i] = 0;
            totalMonsters[1][i] = MAX_INT;
        }else
        {
            totalMonsters[0][i] = totalMonsters[0][i] - k;
        }
    }
    int minAttack = *min_element(totalMonsters[1].begin(), totalMonsters[1].end());
    k =  k-minAttack;
    

    for (size_t i = 0; i < n; i++)
    {
        cout << totalMonsters[0][i]<< " ";
    }
    cout << endl;
     for (size_t i = 0; i < n; i++)
    {
        cout << totalMonsters[1][i]<< " ";
    }
    cout << endl;
    
    
    
    return 0;
}