#include<iostream>
int main(){
      int n,i,sub_marks[100];
      float sum=0;
      std::cin>>n;
      for (i=0; i<n; i++){
            std::cin>>sub_marks[i];
            sum+=sub_marks[i];
      }
      // for (i=0; i<n; i++){
      //       sum+=sub_marks[i];
      // }
      float result = sum / n;
      if(result >= 60){
            std::cout<<"First Division";
      }
      else if(result >= 50 || result <60){
            std::cout<<"Second Division";
      }
      else if(result >= 40 || result <50){
            std::cout<<"Third Division";
      }
      else{
            std::cout<<"Fail";
      }


}