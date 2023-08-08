#include<iostream>

using namespace std;

int main(){
    int row, column;
    cout<<"Enter row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>column;

    for(int i=1; i<=row; i++){  //This loop will create row
        for(int j=1; j<=column; j++){   //This loop will create column
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}