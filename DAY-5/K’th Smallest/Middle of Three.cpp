#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
    
        int middle ;
        if(A>B&&A>C){
            if(B>C)
            middle=B;
            else 
            middle=C;
        }else if(B>A&&B>C)
        {if(A>C)
        middle=A;
            else
            middle=C;
        }else if(C>A&&C>B){
            if(A>B)
            middle=A;
            else
            middle=B;
        }
        
    
        return middle;
    }
    
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 
