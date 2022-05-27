#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    double x,y,z;
    cin>>x>>y>>z;
    
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<x*z/2<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<3.14159*z*z<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<(x+y)/2*z<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<z*z<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<x*y<<endl;
	return 0;

}
