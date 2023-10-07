#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j;
    cin>>row>>column;
    int numbers[row][column],numbers2[row][column],transpose[column][column];
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            cin>>numbers[i][j];
        }
    }
      if(column == row){
            for(i=0; i<row; i++){
                  for(j=0; j<column; j++){
                  transpose[i][j] * numbers[j][i];
                  }
            }
      }
    cout<<"After transposed: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}