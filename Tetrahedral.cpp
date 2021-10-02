#include <iostream>
using namespace std;
 
int tetrahedralNumber(int n)
{
    return (n * (n + 1) * (n + 2)) / 6;
}
 
// Driver Code
int main()
{
    int n = 5;
     
    cout << tetrahedralNumber(n) << endl;
 
    return 0;
}
