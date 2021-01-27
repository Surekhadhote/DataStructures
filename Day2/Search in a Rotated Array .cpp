#include<iostream>
using namespace std;
int bsearch(int *a,int item,int  l,int h);

int bsearch(int *a,int item,int  l,int h){
	
    if (h < l) 
        return -1; 
	int m=(l+h)/2;
	if(a[m]==item){
		return m;
	}
	else if(item>a[m])
    return	bsearch(a,item,m+1,h);
	else
	return bsearch(a,item,l,m-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
	int x,n,item;

	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
			cin>>a[i];
	}
	cin>>item;
	int p=0;
	    for(int i=0;i<n-1;i++){
	         if(a[i-1]>a[i])
	        {
	            p=i;
	            
	        }
	    }
	    if(item<a[0]){
 	     x = bsearch(a,item,p,n-1);
	    }else
	     x= bsearch(a,item,0,p);

	cout<<x<<endl;
        
    }
	
	
	return 0;
}
