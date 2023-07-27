#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j;
    cin>>row>>column;
    int numbers[row][column],numbers2[row][column],add[column][column];
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            cin>>numbers[i][j];
        }
    }
    cout<<"Second matrix: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            cin>>numbers2[i][j];
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
           add[i][j]=numbers[i][j] + numbers2[i][j];
        }
    }
    cout<<"Summation of two matrix:"<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
           cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }

}