/*

Given a positive integer, return its corresponding column title as appear in an Excel sheet.
MS Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA”.

Input:

The first line of each input consists of the test cases. And, the second line consists of a number N.

Output:

In each separate line print the corresonding column title as it appears in an Excel sheet.

Constraints:

1 ≤ T ≤ 70
1 ≤ N ≤ 4294967295

Example:

Input:

2
28
13

Output:

AB
M

 */
 
 #include<bits/stdc++.h>
using namespace std;
string convert(int n) {
    int i,temp;
    string a;
    while(n!=0){
        temp=n%26;
        if(temp==0){
            a.push_back('Z');
            n=n/26-1;
        } 
        else{
            a.push_back('A'+temp-1);
            n/=26;
        } 
        
        //cout<<temp<<" "<<n<<endl;
    }
    reverse(a.begin(),a.end());
    return a;
}
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    cout<<convert(n)<<endl;
	}
	return 0;
}
