#include<bits/stdc++.h>
using namespace std;
int bsearch(long long *a,long long item,long long  l,long long h);

int bsearch(long long *a,long long item,long long  l,long long h){
	
    if (h < l) 
        return -1; 
	long long m=(l+h)/2;
	if(a[m]==item){
		return m+1;
	}
	else if(item>a[m])
    return	bsearch(a,item,m+1,h);
	else
	return bsearch(a,item,l,m-1);
}
int main() {
	//code
	long long t;
	cin>>t;
	while(t--){
	    long long a[100000];
	    long long n,p,x;
	    cin >> n ;
	    
	    for(long long i = 0; i < n; i++){
	        cin >> a[i];
	    }
	 long long item;
	cin>>item;
	  p=a[0];
	  
	  for(long long i=0;i<n;i++){
	  	if(p<a[i])
	  	p=i+1;
	  }
	  
	  if(item<p){
	  	x=bsearch(a,item,p,n-1);
	  }else{
	  	x=bsearch(a,item,0,p-1);
	  }
	  cout<<x<<endl;
	}
	    
	    cout << endl;
	    
	
	
	return 0;
}
