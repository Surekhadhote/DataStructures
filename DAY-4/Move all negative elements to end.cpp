#include <bits/stdc++.h>
using namespace std;


void segregateElements(int [], int );

int main() {
	// your code goes here// { Driver Code Starts

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
//


void segregateElements(int arr[],int n)
{
    // Your code goes here#include<iostream>

	int brr[n];
	int c=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>=0)
		brr[c++]=arr[i];}
		
		
for(int i=0;i<=n;i++){
    if(arr[i]<0)
		brr[c++]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=brr[i];
	}

}
