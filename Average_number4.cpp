#include<iostream>
using namespace std;
int main()
{
    float numbers[100],sum=0;
    int n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>numbers[i];
    }
    for(i=0; i<n; i++){
        sum+=numbers[i];
    }
    float average = sum/n;
    cout<<"Average number: "<<average;
}