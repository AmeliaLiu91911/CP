#include<iostream>
#include<vector>
using namespace std;

struct biathlete
{
    int l; //first segment
    int r; //last segment
    int t; //speed
    int c; //payout
};

int main()
{
    int n,m; // n = number of seg . m = number of participants
    cin >> n >> m;
    vector<biathlete> roster;
    roster.reserve(m);

    for (size_t i = 0; i < m; i++) // input data
    {
        int li, ri , ti, ci;
        cin >> li >> ri >> ti >> ci;
        roster[i].l = li;
        roster[i].r = ri;
        roster[i].t = ti;
        roster[i].c = ci;
    }
    

    //determine the winner per segment.
    
    int sum = 0;
    int payout = 0;
    int speed;
    for (size_t i = 0; i < n; i++) // each segment
    {
        payout = 0;

        for (size_t j = 0; j < m; j++) // all biathlethes 
        {

            if ((roster[j].l <= (i+1)) && ((i+1) <= roster[j].r)) // if they are running
            {
                //cout << roster[j].l << " <= " << i+1 << " <= " << roster[j].r << endl;

                if (payout == 0) // calculate winning payout
                {
                    payout = roster[j].c;
                    speed = roster[j].t;

                } else if (roster[j].t < speed)
                {
                    payout = roster[j].c;
                    speed = roster[j].t;
                }

            }
            
        }
        sum += payout;
    }
    cout << sum << endl;
    return 0;
}