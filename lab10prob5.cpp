#include<bits/stdc++.h>
using namespace std;
class A{
      public:
      int n1;
      void initial(int x){
            n1 = x;
      }
};
class B{
      public:
      int n2;
      void initial(int y){
            n2 = y;
      }
};
class C:public A,public B{
      public:
      void sum(){
            int summation = n1 + n2;
            cout<<summation;
      }
};
int main(){
      int x,y;
      cin>>x>>y;
      C object1;
      object1.A::initial(x);
      object1.B::initial(y);
      object1.sum();
}
