#include<iostream>

using namespace std;
int main(){
	int i,j,n;
	cout<<"enter number of elements "<<endl;	cin>>n;
	int a[n];
	

	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
			cin>>a[i];
	}
int small=a[n],large=a[0];
for(int i=0;i<n;i++){
	if(large<a[i]){
		large=a[i];
	}
	if(small>a[i]){
		small=a[i];
	}
}
	
	
	cout<<"large"<<large<<"small"<<small;
	return 0;
}
