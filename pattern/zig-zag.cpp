#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Please enter size of how many star you want to print: "<<endl;
    cin>>n;

    for(int i=1; i<=3; i++){    //This loop used for column
        for(int j=1; j<=n; j++){    //This loop used for row
            if((i+j)%4==0 || (i==2 && j%4==0)){     //This conditional statement stands for creating stars
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}