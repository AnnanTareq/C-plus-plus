#include<iostream>

using namespace std;

void fibonacci(int n){
    int a = 0;
    int b = 1;

    int next;

    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        next = a + b;   //Adding last two consecutive index value
        a = b;  //now a hold the value of b
        b = next;   //now it holds latest value
    }
    return;
}


int main(){
    int n;
    cout<<"Enter iteration size : "<<endl;
    cin>>n;

    fibonacci(n);
}