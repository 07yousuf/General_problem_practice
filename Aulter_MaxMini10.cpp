#include<iostream>
using namespace std;
int max(int[],int);
int min(int[],int);
int result,result2,maxi,mini,size;

int main(){
      cin>>size;
      int numbers[100];
      for(int i=0; i<size; i++){
            cin>>numbers[i];
      }
      int result = max(numbers,size);
      int result2 = min(numbers,size);
      cout<<"Maximum number: "<<result<<endl<<"Minimum numbers: "<<result2;
}
int max(int numbers1[100],int size){
      maxi=numbers1[0];
      for(int i=0; i<size; i++){
            if(maxi<numbers1[i]){
                  maxi=numbers1[i];
            }
      }
      return maxi;
}
int min(int numbers2[100],int size){
      mini=numbers2[0];
      for(int i=0; i<size; i++){
            if(mini>numbers2[i]){
                  mini=numbers2[i];
            }
      }
      return mini;
}