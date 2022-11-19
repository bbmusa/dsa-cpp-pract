#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    
	    int r=n%3;
	    
	    if(r==1) {
	        cout<<"HUGE";
	    } else if(r==2) {
	        cout<<"SMALL";
	        
	    }else {
	        cout<<"NORMAL";
	    }
	    cout<<endl;
	}
    return 0;
}