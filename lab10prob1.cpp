#include<bits/stdc++.h>
using namespace std;
class Message{
      protected:
      string sample;
      public:
      string initial(string x){
            sample = x;
      }
      void show(){
            cout<<sample<<endl;
      }
};
class Dialouge : public Message{
      public:
      void show(){
            cout<<"Hello! I'm Yousuf\n";
      }
};
int main(){
      string x;
      getline(cin,x);
      Dialouge object1;
      object1.initial(x);
      object1.show();
      object1.Message::show();
}
