#include<iostream>
using namespace std;
int main(){
	int i,j,n,d=-1;
	
	cout<<"enter number of elements "<<endl;	cin>>n;
	int a[n];

	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
			cin>>a[i];
	}
	
	for(int i=0;i<n;i++ ){
		if(a[i]==a[i+1]){
			d=a[i];
			break;
		}
	}
	if(d!=-1)
	cout<<"duplicate number is: "<<d<<endl;
	else
	cout<<"no duplicacy";
	
	
	return 0;
}
