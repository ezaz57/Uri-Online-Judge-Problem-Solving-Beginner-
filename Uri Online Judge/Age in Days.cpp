#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int realDay;
   int day;
   
  
    int year = (n/365); 
    int temp = n%365;
    
    int month = temp/30;
    int days = temp %30;
    
    cout<<year<<" ano(s)"<<endl<<month<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    
    
 
    return 0;
}
