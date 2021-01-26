#include <iostream>
using namespace std;

int main() {int tt;
	std::cin>>tt;
	while(tt--){
	  

	int n,k;
		std::cin>>n;
	int a[n];
std::cin>>k;
	

	

	
	for(int i=0;i<n;i++){
			std::cin>>a[i];
	}
	
	
	

	int t;
for(int i=0;i<k;i++){
	t=a[0];
	for(int j=0;j<n;j++){
		
	a[j]=a[j+1];	
	a[n]=t;
	}
}
std::cout<<endl;
	for(int i=0;i<n;i++){
			std::cout<<a[i]<<" ";
	}


	}
	return 0;
}
