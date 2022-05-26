#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
  int a,b,d,e,h;
  double c,f;
   
   double ans;
   
   cin>>a>>b>>c;
   cin>>d>>e>>f;
   
   ans = (b*c)+(e*f);
   cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<ans<<endl;
   
 
    return 0;
}
