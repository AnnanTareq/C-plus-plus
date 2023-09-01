#include "bits/stdc++.h"

using namespace std;

int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int a[size];    //Declare array
    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    int curr = 0;
    for(int i = 0; i< size; i++){
        curr = 0;
        for(int j = i; j < size; j++){
            // cout<<"j = "<<j<<endl;
            curr += a[j];   //add all values from i'th position to end
            // cout<<"a[j] = "<<a[j]<<endl;
        }
        cout<<"Sum of sub array "<<i<<" = "<<curr<<endl;
        cout<<endl;
    }
    cout<<curr<<endl;

    return 0;
}