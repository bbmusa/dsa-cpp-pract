#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b>=a&&b>=c)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}