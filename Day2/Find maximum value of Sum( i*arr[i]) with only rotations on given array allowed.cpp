#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	int findmaxsum(int arr[], int n) {
	    // code here
	    int max=0;
	   
	    for(int i=0;i<n;i++){
	    	int  m,l=0;
	    	  
		/*for (int k = 0; k < n; k++) {
              cout<<arr[k]<<" ";
              }cout<<endl;
			*/
			for(int j=0;j<n;j++){
	        l=l+j*arr[j];
	        } 
	        
		  
		  rotate(arr, arr + (i+1), arr + n);
	        if(max<l)
	        max=l;
	         
		}
	   
	    return max;
	}

};

// { Driver Code Starts.

int main() {
   
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        int ans = ob.findmaxsum(a, n);
        cout << ans << "\n";
    
    return 0;
}
