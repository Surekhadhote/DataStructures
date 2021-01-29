#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	     int count = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) 
            arr[count++] = arr[i];} 
            // here count is  
    while (count < n) {
        arr[count++] = 0;} }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  
