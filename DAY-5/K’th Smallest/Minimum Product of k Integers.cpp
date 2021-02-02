include <bits/stdc++.h>
using namespace std;

int minProduct(int arr[], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cin>>k;
	    cout<<minProduct(arr, n, k)<<endl;
    }
	return 0;
}
int minProduct(int arr[], int n, int k)
{
   int mod=1e9+7;
    // Complete the function
    sort(arr,arr+n);
     long long m=1;
    for(int i=0;i<k;i++){
        m=m*arr[i]%mod;
    }
    
    
    return m;
}
