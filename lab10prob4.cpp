#include<bits/stdc++.h>
using namespace std;
class Info{
      public:
      string sentence;
      void initial(string x){
            sentence = x;
      }
      
};
class convert:public Info{
      public:
      void converting(){
      for(char& ch:sentence){
            ch = toupper(ch);
      }
      }
      void show(){
            cout<<sentence<<endl;
      }
};
int main(){
      string  x;
      cin>>x;
      convert object1;
      object1.initial(x);
      object1.converting();
      object1.show();
      
      
}