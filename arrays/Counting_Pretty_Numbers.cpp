#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,z=0;
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            int g =i%10;
            if(g==2 || g==3|| g==9)
            {
                z++;
            }
        }
        cout<<z<<endl;
    }
    return 0;
}