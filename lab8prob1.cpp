#include<bits/stdc++.h>
using namespace std;
class shape {
      int width,height;
      public:
      shape(int a,int b){
            width = a;
            height =b;
      }
      int areaofrectangle(){
            return width*height;
      }
      int areaofsquare(){
            return height * height;
      }
      int perimeterofrectangle(){
            return 2* (width + height);
      }
      int perimeterofsquare(){
            return 4*height;
      }
};
int main(){
      int w,s;
      cin>>w>>s;
      shape rectangle(w,s);
      shape square(w,s);
      cout<<rectangle.areaofrectangle()<<endl;
      cout<<rectangle.perimeterofrectangle()<<endl;
      cout<<square.areaofsquare()<<endl;
      cout<<square.perimeterofsquare()<<endl;


}