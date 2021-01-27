#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int p=0;
	    
	    for(int i=0;i<n-1;i++){
	         if(arr[i]>arr[i+1])
	        {
	            p=i+1;
	            
	        }
	    }
	    
	    
	    return p;
	}

};
int main(){
int t;
cin>>t;
while(t--){
int i,n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
Solution ob;
auto ans=ob.findkRotation(a,n);
cout<<ans<<"\n";

}

}


return 0;}
