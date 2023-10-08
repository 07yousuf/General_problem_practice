#include<bits/stdc++.h>
using namespace std;
class student {
      string Name;
      int ID;
      int Marks;
      public:
      void initial(string x,int y,int z){
            Name = x;
            ID = y;
            Marks =z;
      }
      void show(){
            cout<<Name<<endl<<ID<<endl<<Marks<<endl;
      }
};
class Result:public student{
      void show(){
            cout<<"Showing the result by using derived class-\n";
      }
};
int main(){
      string x;
      int y,z;
      cin>>x>>y>>z;
      Result object1;
      object1.initial(x,y,z);
      cout<<"Information - \n";
      object1.student::show();

}
