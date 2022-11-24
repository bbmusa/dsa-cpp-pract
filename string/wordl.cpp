#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;

        for(int i=0; i<5;i++)
        {
            if(a[i]==b[i])
                cout<<"G";
            if(a[i]!=b[i])
                cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}