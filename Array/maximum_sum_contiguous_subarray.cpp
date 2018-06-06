#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n],i,maxm=INT_MIN,curr=0;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++){
	        curr=max(curr+a[i],a[i]);
	        maxm=max(maxm,curr);
	    }
	    cout<<maxm<<endl;
	}
	return 0;
}
