#include<iostream>
using namespace std;
int main(){
	int i,j,k=0,s=0,n;
	
	cout<<"enter number for pattern "<<endl;	cin>>n;
	int a[n];
	for(i=1;i<=n;i++){
		k=k+i;
}
	cout<<"enter array elements"<<endl;
	for(int i=1;i<n;i++){
		
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		s=s+a[i];
	}
	cout<<"missing number is: "<<k-s;
	
	return 0;
}
