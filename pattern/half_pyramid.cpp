#include<iostream>
using namespace std;

int main(){
    int max_val;
    cout<<"Enter Maximum value: ";
    cin>>max_val;
    
    for(int i=max_val; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}