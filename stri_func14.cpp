#include<iostream>
#include<cstring>
using namespace std;
int Stri(char name2[100]);
int main(){
      char name[100];
      cin>>name;
      int x = Stri(name);
      cout<<x;
}
int Stri(char name2[100]){
      int x2= strlen(name2);
      return x2;
}