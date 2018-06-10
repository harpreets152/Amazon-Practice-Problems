/*

Given an array, find inversion count of array.

Inversion Count for an array indicates – how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the inversion count of array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ C ≤ 500

Example:

Input:
1
5
2 4 1 3 5

Output:
3
 
 */
 
 #include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int mid,int r){
    int n1=mid-l+1,n2=r-mid;
    int left[n1],right[n2];
    int i,j,k;
    for(i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(i=0;i<n2;i++) right[i]=a[mid+1+i];
    i=0;j=0;
    k=l;
    int count=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k++]=left[i];
            i++;    
        } 
        else{
            count=count+n1-i;
            a[k++]=right[j++];
        }
    }
    if(i==n1){
        while(j<n2){
            a[k++]=right[j++];
        }
    }
    if(j==n2){
        while(i<n1) a[k++]=left[i++];
    }
   // cout<<count<<endl;
    //cout<<r<<" "<<k<<endl;
    return count;
}
int count_inversions(int a[],int l,int r){
    int mid=(l+r)/2;
    int count=0;
    if(l<r){
        count=count_inversions(a,l,mid);
        count+=count_inversions(a,mid+1,r);
        count+=merge(a,l,mid,r);
    }
    return count;
}
int main()
 {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++) cin>>a[i];
        cout<<count_inversions(a,0,n-1)<<endl;
        //for(i=0;i<n;i++) cout<<a[i]<<" ";
       // cout<<endl;
    }
	return 0;
}
