#include<iostream>
using namespace std;

int main(){
    int row, col;

    cout<<"Enter values: ";
    cin>>row>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout<<"*";
        }
        
        /* code */
        cout<<endl;
    }
    
}