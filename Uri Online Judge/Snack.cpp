#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	int x,y;
	int sum;

	cin>>x>>y;
	
	if(x==1){
	     cout <<fixed<<"Total: R$  "<<setprecision(2)<<4.00*y<<endl;
	}else{
	    if(x==2){
	        cout<<fixed<<"Total: R$  "<<setprecision(2)<<4.50*y<<endl;
	    } else{
	        if(x==3){
	           cout<<fixed<<"Total: R$  "<<setprecision(2)<<5.00*y<<endl;
	        }else{
	            if(x==4){
	                cout<<fixed<<"Total: R$  "<<setprecision(2)<<2.00*y<<endl;
	            }else{
	                if(x==5){
	                    cout<<fixed<<"Total: R$  "<<setprecision(2)<<1.50*y<<endl;
	                }
	            }
	        }
	    }
	}


	return 0;

}
