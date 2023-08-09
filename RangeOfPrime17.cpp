#include<bits/stdc++.h>
using namespace std;
int prime(int);
int main()
{
    int x,y,result;
    cin>>x>>y;
    for(int i=x; i<=y; i++){
        result = prime(i);
        if(result==1){
            cout<<i<<endl;
        }
    }


}
int prime(int X)
{
    int flag=1;
    for(int i=2; i<=X/2; i++){
        if(X%i==0){
            flag=0;
        }

    }
    return flag;
}
