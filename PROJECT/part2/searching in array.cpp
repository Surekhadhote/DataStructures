#include<iostream>

using namespace std;
int main(){
	int i,j,n,d=-1,item;
	int mid,low,high;
	cout<<"enter number of elements "<<endl;	cin>>n;
	int a[n];
	cout<<"enter element for searching";
	cin>>item;

	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
			cin>>a[i];
	}

		for(int i=0;i<n;i++){
	if(a[i]==item){
		cout<<"found"<<endl;
		break;
		}
	}
	
	
	
	return 0;
}
