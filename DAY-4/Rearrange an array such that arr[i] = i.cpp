#include <iostream>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}// } 
int * Rearrange(int *arr,int n){
    // Complete the function
  for(int i=0;i<n;i++){
      if(arr[i]!=-1&&arr[i]!=i){
          int x=arr[i];
           while (arr[x] != -1 && arr[x] != x) 
            {
                // store the value from
                // desired place
                int y = arr[x];
 
                // place the x to its correct
                // position
                arr[x] = x;
 
                // now y will become x, now
                // search the place for x
                x = y;
            }
   // position
            arr[x] = x;
 
            // check if while loop hasn't
            // set the correct value at A[i]
            if (arr[i] != i)
            {
                // if not then put -1 at
                // the vacated place
                arr[i] = -1;
            }
      }
  }
        
    return arr;
}
