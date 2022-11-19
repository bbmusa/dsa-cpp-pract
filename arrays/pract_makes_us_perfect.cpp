#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t=4,sum=0,a;
    for(int i=0; i<t; i++)
    {
        cin>>a;
        if(a>=10)   sum++;
    }
    cout<<sum;
    return 0;
}