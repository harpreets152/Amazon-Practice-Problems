/*

Given a binary number,  write a program that prints 1 if given binary number is a multiple of 3.  Else prints 0. The given number can be big upto 2^100

It is recommended to finish the task using one traversal of input binary string.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. 
Each case contains a string containing 0's and 1's.
 

Output:
For each test case, output a 1 if string is multiple of 3, else 0.

Constraints:
1<=T<=100
1<=Lenght of Input String<=100


Example:
Input:
2
1001
100

Output:
1
0

*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    string a;cin>>a;int i,n=a.length();
	    int e_count=0,o_count=0;
	    for(i=n-1;i>=0;i-=2){
	        o_count+=a[i]-'0';
	    }
	    for(i=n-2;i>=0;i-=2) e_count+=a[i]-'0';
	    //cout<<e_count<<" "<<o_count<<endl;
	    if((o_count-e_count)%3==0) cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}
