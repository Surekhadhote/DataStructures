#include <bits/stdc++.h>

using namespace std;

void rearrangeArray(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
void rearrangeArray(int arr[], int n) {
    // code here
   
    int brr[n];
    sort(arr,arr+n);
    for(int i=0,j=0;i<n;i=i+2,j++){
        brr[i]=arr[j];
    }
    
    for(int i=1,j=n-1;i<n;i=i+2,j--){
        brr[i]=arr[j];
    }
    
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
    
    
}
