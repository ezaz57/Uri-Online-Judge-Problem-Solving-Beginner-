#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int a,b,c,d;
   
   cin>>a>>b>>c>>d;
   
   int sumC  = c+d;
   int sumA = a+b;
 
       if(b>c && d>a && sumC > sumA && c>0 && d>0 && a % 2 == 0){
           cout<<"Valores aceitos"<<endl;
           
       }else{
           cout<<"Valores nao aceitos"<<endl;
       }
       
   
   
   
   return 0;
}
