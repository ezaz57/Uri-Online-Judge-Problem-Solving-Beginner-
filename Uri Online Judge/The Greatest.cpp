#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  int mab ;
  cin>>a>>b>>c;
  
  mab = (a+b+abs(a-b))/2;
  int ans = (mab+c +abs(mab-c))/2;
  cout <<ans<<" eh o maior"<<endl;
  return 0;
}
