#include<bits/stdc++.h>
using namespace std;
int prime(int);
int main()
{
    int x;
    cin>>x;
    int result=prime(x);
     if(result==1){
            cout<<"it is not prime number";
        }
        else{
            cout<<"it is prime number";
        }

}
int  prime(int X)
{
    int flag=0;
    for(int i=2; i<=X/2; i++){
        if(X%i==0){
            flag=1;
        }
    }
    return flag;

}
