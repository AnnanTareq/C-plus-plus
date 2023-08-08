#include<iostream>

using namespace std;

int main(){
    int row, column;
    cout<<"Enter row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>column;

    for(int i=1; i<=row; i++){  //This loop used to print row
        
        for(int j=1; j<=column; j++){   //This loop will create column
        
            if(i==1 || i == row){   //This conditional statement used to create stars on first and last line
                cout<<" * ";
            }
            else if (i>1 && i<row)  //This conditional statement used for creating star on the first and end of a line, then between this two stars spaces will be added.
            {
                if(j == 1 || j == column){
                    cout<<" * ";
                }else{
                    cout<<"   ";
                }
            } 
        }
        cout<<endl;
    }
}