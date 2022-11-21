#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code frome here
    int t,ans,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
	    int key=a[0],c=0,max=1;
	    for(int i=0;i<n;i++){
	        if(a[i]==key){
	            c++;
	        }
	        else{
	            key=a[i];
	            c=1;
	        }
	        if(c>max){
	            max=c;
	        }
	    }
	    cout<<(n-max)<<endl;
    }
    return 0;
}
//2 2 1 1
//1 2 1 2
//0 -1 0 -1
//3-2