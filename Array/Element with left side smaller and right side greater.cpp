/*
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated array elements.

Output:
For each test case, in a new line print the required element. If no such element present in array then print -1.

Constraints:
1<=T<=100
3<=N<=106
1<=A[i]<=106

Example:
Input:
3
4
4 2 5 7
3
11 9 12
6
4 3 2 7 8 9

Output:
5
-1
7

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n],i,j,left[n],right[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    left[0]=a[0];
	    for(i=1;i<n;i++){
	        left[i]=max(left[i-1],a[i]);
	    }
	    right[n-1]=a[n-1];
	    for(i=n-2;i>=0;i--) right[i]=min(a[i],right[i+1]);
	    for(i=1;i<n-1;i++){
	        if(a[i]>=left[i] && a[i]<=right[i]) break;
	    }
	    if(i==n-1) cout<<"-1\n";
	    else cout<<a[i]<<endl;
	}
	return 0;
}
