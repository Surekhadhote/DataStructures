#include <bits/stdc++.h>
using namespace std;
void rearrange(long long *arr, int n) 
{ 
	
	// Your code here

    long long brr[n];
   
    for(long long i=1,j=0;i<n;i=i+2,j++){
        brr[i]=arr[j];
    }
    
    for(long long i=0,j=n-1;i<n;i=i+2,j--){
        brr[i]=arr[j];
    }
    
    for(long long i=0;i<n;i++){
        arr[i]=brr[i];
    }
	 
}
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  //
