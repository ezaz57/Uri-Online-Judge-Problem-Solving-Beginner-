#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    double Volume;
    int R;
    double pi = 3.14159;
    cin>>R;
    
    Volume = (4.0/3)*pi*R*R*R;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<Volume<<endl;
    return 0;
}
