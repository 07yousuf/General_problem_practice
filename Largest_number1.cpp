#include<iostream>
using namespace std;
int main()
{
    int n,i,numbers[100];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>numbers[i];
    }
    int largest=numbers[0];
        for(i=0; i<n; i++){
        if(largest<numbers[i]){
            largest=numbers[i];
        }
    }
    cout<<"Largest number: "<<largest;


}