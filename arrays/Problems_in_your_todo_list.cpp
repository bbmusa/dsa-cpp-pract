#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;
    while(t--)
    {
        int y,diff,sum=0;
        cin>>y;
        for(int i=1;i<=y;i++)
        {
            cin>>diff;
            if(diff>=1000)
            {
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}