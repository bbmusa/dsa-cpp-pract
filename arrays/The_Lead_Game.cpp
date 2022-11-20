#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t,max=0,h=0,x=0,y=0,x1,y1;
    cin>>t;
    while(t--)
    {
        cin>>x1;
        cin>>y1;
        int diff;
        x=x+x1;
        y=y+y1;
        if(x>y)
            diff = x-y;
        else
            diff = y-x;
        if(diff>max){
            max=diff;
            h++;
        }
    }
    cout<<h<<" "<<max<<endl;
    return 0;
}