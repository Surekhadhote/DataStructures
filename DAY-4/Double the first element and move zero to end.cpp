#include <bits/stdc++.h> 

using namespace std; 

void modifyAndRearrangeArr(int arr[], int n);


// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 
void modifyAndRearrangeArr(int arr[], int n) 
{ 
	// Complete the function
	
	for(int p=0,q=1;q<n;p++,q++ ){
	    
	if(arr[p]!=0&&arr[q]!=0&&arr[p]==arr[q]){
	    arr[p]=arr[p]*2;
	    arr[q]=0;
	    
	}    
	}

int c=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        arr[c++]=arr[i];
    }
}
while(c<n){
    arr[c++]=0;
}

}
