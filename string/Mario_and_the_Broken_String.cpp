#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a;
        cin>>a;
        cin>>s;
        bool f=1;
        int n=a;
        for(int i=0;i<n/2;i++){
           if(s[i]!=s[n/2+i])   f=0;
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}