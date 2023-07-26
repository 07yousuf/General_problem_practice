#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cin>>number;
    while(number!=0){
        int mod=number%10;
        sum+=mod;
        number=number/10;
    }
    cout<<sum;

}
