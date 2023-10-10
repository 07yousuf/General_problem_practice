#include<bits/stdc++.h>
using namespace std;
class Average{
      public:
      int size,*x,sum=0;
      double Avg;
      int store(int numbers[100],int n){
            size = n;
            x= numbers;
      };
};
class result:public Average{
      public:

      int calcu(){
            for(int i=0; i<size; i++){
                  sum+=x[i];
            }
            Avg = sum / size;
      }
      void show(){
            cout<<"The average Result Below-\n";
            cout<<Avg<<endl;
      }
};
int main(){
      int size;
      cin>>size;
      int x[size];
      for(int i=0; i<size; i++){
            cin>>x[i];
      }
      result object1;
      object1.store(x,size);
      object1.calcu();
      object1.show();
}