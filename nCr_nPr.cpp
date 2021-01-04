#include<iostream>
using namespace std;

//nCr and nPr using function

        int fact(int n){
        int fact = 1;
        for(int i=1; i<=n; i++){

            fact=fact*i;

        }
        return fact;
        }
       int main(){
       int n,r;
       cin>>n>>r;
       int ans= fact(n)/(fact(r)*fact(n-r));
       cout<<"nCr of "<<n<<" of "<<r<<" is "<<ans<<endl;
       int ans2=fact(n)/fact(n-r);
       cout<<"nPr of  "<<n<<" and "<<r<<"  is " <<ans2;

       }

