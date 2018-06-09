/*

Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array.
The second line contains the N space separated positive integers denoting the elements of array A.

Output:
For each testcase, print "Yes" or  "No" whtether it is Pythagorean Triplet or not.

Constraints:
1<=T<=50
 1<=N<=100
 1<=A[i]<=100

Example:
Input:
1
5
3 2 4 6 5
Output:
Yes

*/


#include<bits/stdc++.h>
using namespace std;
int comp(int a,int b){
    return a>b;
}
bool check(int a[],int n){
    int k,i,j;
	for(i=0;i<n;i++) a[i]*=a[i];
	//if(n<3) return 0;
	sort(a,a+n,comp);
	//for(i=0;i<n;i++) cout<<a[i]<<" ";
	//cout<<endl;
	for(i=0;i<n-2;i++){
	    j=i+1;
	    k=n-1;
	    while(j<k){
	        if(a[j]+a[k]==a[i]) return 1;
	        if(a[j]+a[k]>a[i]) j++;
	        else k--;
	    }
	}
	return 0;
}
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int i,j,a[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    bool p=check(a,n);
	    if(p==0) cout<<"No\n";
	    else cout<<"Yes\n";
	}
	return 0;
}
