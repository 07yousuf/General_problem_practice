#include<bits/stdc++.h>
using namespace std;
int main(){
    
    double discount_percentage,discount_price;
    double original_price;
    cin>>discount_percentage>>discount_price;
    
    original_price= (discount_price /(1- (discount_percentage/100)));
    
    cout<<original_price<<endl;
}




