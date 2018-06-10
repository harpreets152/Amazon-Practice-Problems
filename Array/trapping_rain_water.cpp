/*

Given n non-negative integers in array representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
For example:
Input:
3
2 0 2
Output:
2
Structure is like below
|  |
|_|
We can trap 2 units of water in the middle gap.

Below is another example.



Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains an integer N followed by N numbers to be stored in array.

Output:
Print trap units of water in the middle gap.

Constraints:
1<=T<=100
3<=N<=100
0<=Arr[i]<10

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
 0
 
 */
 
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int i,a[n];
        for(i=0;i<n;i++) cin>>a[i];
        int total=0;
        int left[n],right[n],j;
        left[0]=a[0];right[n-1]=a[n-1];
        for(i=1;i<n;i++) left[i]=max(left[i-1],a[i]);
        for(i=n-2;i>=0;i--) right[i]=max(right[i+1],a[i]);
        for(i=1;i<n-1;i++){
            total+=(min(left[i],right[i])-a[i]);
        }
        cout<<total<<endl;
    }
	
	return 0;
}
