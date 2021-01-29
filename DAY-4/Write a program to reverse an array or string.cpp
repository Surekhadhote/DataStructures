#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
  
  }
  
  
	string reverseWord(string str){
    
  //Your code here
  for(int i=0;i<(str.size())/2;i++){
      int x=str.size();
      char s;
      s=str[i];
      str[i]=str[x-i-1];
      str[x-i-1]=s;
  }
  
  
  return str;
}
