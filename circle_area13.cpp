#include<iostream>
using namespace std;
float circle(float);
float pie=3.1416,r;
int main(){
      cin>>r;
      float result= circle(r);
      cout<<result;
}
float circle(float x){
      return pie*r*r;
}