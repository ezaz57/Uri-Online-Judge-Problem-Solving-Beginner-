#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 double x1,x2,y1,y2;
 
 cin>>x1>>x2>>y1>>y2;
 
 float mathC = sqrt(pow((x1-y1),2)+pow(x2-y2,2));
 cout<<fixed<<setprecision(4);
 cout<<mathC<<endl;
 
 return 0;
}
