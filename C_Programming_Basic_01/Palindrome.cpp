#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,temp,res=0,rem;
  cin>>n;
  temp=n;
  while(temp>0){
    rem=temp%10;
    res=res*10+rem;
    temp/=10;
  }
  if(n==res){
    cout<<"Palindrome"<<endl;
  }
  else{
    cout<<"Not Palindrome"<<endl;
  }
}


int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
