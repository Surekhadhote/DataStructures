#include<iostream>

using namespace std;
int main(){
	int n,count=0,pairnumber;
	cout<<"enter number of elements "<<endl;	cin>>n;
	int a[n];
	cout<<"pairsum number"<<endl; cin>>pairnumber;
	

	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
			cin>>a[i];
	}
	
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if((a[i]+a[j])==pairnumber)
		count++;
	}
}	
cout<<"pairs are: "<<count/2<<endl;
	return 0;
}
