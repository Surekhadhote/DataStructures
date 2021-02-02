#include<bits/stdc++.h>
using namespace std;
vector<int> kLargest(int arr[], int n, int k)
{ vector <int> greater;
    sort(arr, arr + n);
 
    // Print the first kth largest elements
    for (int i = 0; i <n; i++)
     greater.push_back(arr[i]);
    
    reverse(greater.begin(),greater.end());
    vector <int> s;
    for(int i=0;i<k;i++){
        s.push_back(greater[i]);
    }
    return s;
   
}
vector<int> kLargest(int arr[], int n, int k);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        vector<int> result = kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  
