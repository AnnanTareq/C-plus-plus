#include<iostream>

using namespace std;

int main(){
    int n;
    
    cin>>n;


    for (int i = 1; i <= n; i++)
    {
        //This loop will print spaces
        int j;
        for(j = 1; j<=n-i; j++){    
            cout<<" ";
        }
        int k = i; 
       // This loop will print in decreasing order to 1
        for(; j<=n; j++){   
            cout<<k--<<" ";
            
        }

        //This loop will print in increasing order from 2
        k=2;
        for(; j <= n+i-1; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    
}