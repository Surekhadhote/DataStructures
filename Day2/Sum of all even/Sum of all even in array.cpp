// C++ program to find the sum of all even
// occurring elements in an array
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to find the sum of all even
// occurring elements in an array
int findSum(int arr[], int N)
{
    // Map to store frequency of elements
    // of the array
    unordered_map<int, int> mp;
 
    for (int i = 0; i < N; i++) {
        mp[arr[i]]++;
    }
 
    // variable to store sum of all
    // even occurring elements
    int sum = 0;
 
    // loop to iterate through map
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
 
        // check if frequency is even
        if (itr->second % 2 == 0)
            sum += (itr->first) * (itr->second);
    }
 
    return sum;
}
 
// Driver Code
int main()
{
    int arr[] = { 10, 20, 20, 40, 40 };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    cout << findSum(arr, N);
 
    return 0;
}
