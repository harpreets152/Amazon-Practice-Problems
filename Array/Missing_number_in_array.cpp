/*

Given an array of size n-1 and given that there are numbers from 1 to n with one missing, the missing number is to be found.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.
The second line of each test case contains N-1 input C[i],numbers in array.

Output:

Print the missing number in array.

Constraints:

1 ≤ T ≤ 200
1 ≤ N ≤ 1000
1 ≤ C[i] ≤ 1000

Example:

Input
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output
4
9

*/

#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int i,a[n-1];
		for(i=0;i<n-1;i++) cin>>a[i];
		int j,b[n];
		for(i=1;i<=n;i++) b[i]=0;
		for(i=0;i<n-1;i++){
			b[a[i]]=1;
		}
		for(i=1;i<=n;i++){
			if(b[i]==0) break;
		}
		cout<<i<<endl;	
	}
	
	return 0;
}
