/*
Given an integer array, you need to find the two elements such that their sum is closest to zero.
 
Input:
The first line of input contains an integer T denoting the number of test cases.  
The first line of each test case is N,the size of array
Each test case consist of a N integers which are the array elements.
 
Output:
Print the two numbers in ascending order such that their sum is closest to zero.
 
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
-100007 ≤ a[i] ≤ 100007
 
Example:
Input
3
3
-8 -66 -60  
6
-21 -67 -37 -18 4 -65  
2
-24 -73  
 
Output
-60 -8
-18 4
-73 -24

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n],i,j;
	    for(i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    i=0;j=n-1;
	    int min=INT_MAX;
	    int l=0,r=n-1;
	    while(i<j){
	        if(abs(a[i]+a[j]-0)<min){
	            min=abs(a[i]+a[j]);
	            l=i;
	            r=j;
	        }
	        if(a[i]+a[j]>0) j--;
	        else i++;
	        
	    }
	    cout<<a[l]<<" "<<a[r]<<endl;
	}
	return 0;
}
