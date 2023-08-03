#include<iostream>
using namespace std;
class sample{
      public:
      int a,b;
      int sum(int a,int b){
            return a+b;
      }
};
int main(){
      sample obj2;
      obj2.a=10;
      obj2.b=20;
      int result = obj2.sum(obj2.a, obj2.b);
      cout<< obj2.a<<endl<< obj2.b<<endl<<result;

}