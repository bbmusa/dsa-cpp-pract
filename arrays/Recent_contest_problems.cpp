#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t;
    int a1=0,a2=0;
    cin>>t;
    while(t--)
    {
        vector<string> contest;
        int l;
        cin>>l;
        while(l--)
        {
            string b;
            cin>>b;
            if(b=="START38")
                a1++;
            if(b=="LTIME108")
                a2++;
        }
        cout<<a1<<" "<<a2<<endl;
        a1=0;
        a2=0;
    }
    return 0;
}