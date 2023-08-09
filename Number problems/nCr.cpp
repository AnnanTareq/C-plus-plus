#include<iostream>

using namespace std;

int factorial(int n){
    int factorial = 1;
    for(int i = 2; i<=n; i++){
        factorial *= i; //It will multiplying the number till b
    }
    return factorial;
}


int main(){
    int n, r;
    cin>>n>>r;

    int answer = factorial(n)/(factorial(r)*factorial(n-r));    //This is a formula to find nCr
    cout<<answer<<endl;
}