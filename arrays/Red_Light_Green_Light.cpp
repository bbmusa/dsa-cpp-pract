#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;
    while(t--)
    {
        int n,ali,saviors=0,middle;
        cin>>n;
        cin>>ali;
        while(n--)
        {
            cin>>middle;
            if(middle>ali)
            {
                saviors++;
            }
        }
        cout<<saviors<<endl;
    }
    return 0;
}