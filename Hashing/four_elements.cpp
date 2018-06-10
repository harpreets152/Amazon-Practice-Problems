/*

Given an array of integers, find a combination of four elements in the array whose sum is equal to a given value X.

Input:
First line consists of T test cases. First line of every test case consists of an integer N, denoting the number of elements in an array. Second line consists of N spaced array elements. Third line of every test case X.

Output:
Single line output, print 1 if combination is found else 0.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
1
6
1 5 1 0 6 0
7
Output:
1

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++) cin>>a[i];
	    int x;cin>>x;
	    unordered_map <int,pair<int,int>> mp;
	    int j;
	    for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            mp.insert(make_pair(a[i]+a[j],make_pair(i,j)));
	        }
	    }
	    for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(mp.find(x-a[i]-a[j])!=mp.end() ){
	                 pair <int,int > p=mp[x-a[i]-a[j]];
	                 if((p.first!=i && p.first!=j) && (p.second!=i && p.second!=j)) 
	                    break;
	                 
	            }
	        }
	        if(j<n) break;
	    }
	    if(i!=n-1) cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}
