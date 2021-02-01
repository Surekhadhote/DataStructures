#include<iostream>
using namespace std;
int main(){
	int arr[]={2,3,4,5,6};
	int brr[5];
	int n=5;
	brr[0]=arr[0]*arr[1];
	for(int i=1;i<n-1;i++){
		brr[i]=arr[i-1]*arr[i+1];
	}
	brr[n-1]=arr[n-1]*arr[n-2];
	for(int i=0;i<n;i++){
		cout<<brr[i]<<endl;
	}
	return 0;
}
