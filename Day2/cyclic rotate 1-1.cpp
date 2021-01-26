
# include <iostream> 
using namespace std;
void rotate(int arr[], int n)
{
    if(n==1)return;
    	int t;
 t=arr[n-1];
	for(int j=n-1;j>0;j--){
	   
	
	arr[j]=arr[j-1];	

	}arr[0]=t;
}
 
  

// Driver code 
int main()  
{ 
    int arr[] = {1, 2, 3, 4, 5}, i; 
    int n = sizeof(arr) /  
            sizeof(arr[0]); 
  
    cout << "Given array is \n"; 
    for (i = 0; i < n; i++) 
        cout << arr[i]; 
  
    rotate(arr, n); 
  
    cout << "\nRotated array is\n"; 
    for (i = 0; i < n; i++) 
        cout << arr[i]; 
  
    return 0; 
} 
