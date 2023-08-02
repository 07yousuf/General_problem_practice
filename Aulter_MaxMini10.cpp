#include<iostream>
using namespace std;
int max(int[]);
int min(int[]);
int result,result2,maxi,mini;
int main(){
      int numbers[100];
      for(int i=0; i<3; i++){
            cin>>numbers[i];
      }
      int result = max(numbers);
      int result2 = min(numbers);
      cout<<"Maximum number: "<<result<<endl<<"Minimum numbers: "<<result2;
}
int max(int numbers1[100]){
      maxi=numbers1[0];
      for(int i=0; i<3; i++){
            if(maxi<numbers1[i]){
                  maxi=numbers1[i];
            }
      }
      return maxi;
}
int min(int numbers2[100]){
      mini=numbers2[0];
      for(int i=0; i<3; i++){
            if(mini>numbers2[i]){
                  mini=numbers2[i];
            }
      }
      return mini;
}