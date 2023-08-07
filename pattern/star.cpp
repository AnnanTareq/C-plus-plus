#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    //This loop produces stars in increasing order.
    for(int i = 1; i<=n; i++){
        //It is used to create spaces infront of stars
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        
        int j;
        for(j = 1; j <= 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //This loop produces stars in decreasing order.
    for(int i = n; i>=1; i--){
        for(int j=n; j>=i+1; j--){
            cout<<" ";
        }

        for(int j=1; j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}