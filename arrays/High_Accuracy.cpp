#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int m,t,r;
    cin>>t;
    while(t--)
    {
        cin>>m;
        r=3-(m%3);
        if(r==3){
            cout<<0<<"\n";
        }
        else
            cout<<r<<"\n";
    }
    return 0;
}