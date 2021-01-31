#include<bits/stdc++.h>
using namespace std;
 
vector<int> assign(int a[], int n);

// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++)
    	  cin>>arr[i];
        vector<int> ans;
        ans = assign(arr, n);
        for(int i=0; i<n; i++)
            cout<< ans[i] << " ";
        cout<< endl;
        
    }
    return 0;
}// } Driver Code Ends
vector<int> assign(int a[], int n)
{
    vector <int> s;
 // Sort the array
    sort(a, a + n);
 
    int ans[n];
    int p = 0, q = n - 1;
    for (int i = 0; i < n; i++) {
        // Assign even indexes with maximum elements
        if ((i + 1) % 2 == 0)
            ans[i] = a[q--];
 
        // Assign odd indexes with remaining elements
        else
            ans[i] = a[p++];
    }
 
for(int i=0;i<n;i++){
s.push_back(ans[i]); 
    
}
    
    return s;
}
