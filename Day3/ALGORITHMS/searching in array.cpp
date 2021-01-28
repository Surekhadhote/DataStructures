#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
   
        int n, i,x;
        cout<<"enter n";
        cin >> n;
        int a[n];
        int item;
        cout<<endl<<"enter array";
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
       
        cout<<endl<<"enter item";
        cin>>item;
        x=binary_search(a,a+n,item);
       if(x==1)
       cout<<"found";
       else
       cout<<"not found";
        
    
    return 0;
}
