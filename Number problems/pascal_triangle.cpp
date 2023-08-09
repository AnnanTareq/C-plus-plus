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
    int n;  
    cin>>n;

    //i stands for rows, which will be creating till n
    for(int i = 0; i<n; i++){
        
        //j stands fro columns, which will be creating till i'th position from zero
        for(int j = 0; j<=i; j++){
            //Using nCr formula for each value   
            cout<<factorial(i)/(factorial(j)*factorial(i-j));
            cout<<" ";
        }
        cout<<endl;
    }
}