#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter any integer number : ";
    cin>>n;

    int rev = 0;    // It will store my reversed number
    
    while(n>0){
        int lastDigit = n%10;   //Filter last digit from given input
        rev = rev*10 + lastDigit;   //Everytime digit will add to one'th place so I have to move to the left like tenth place and so on, then add new value with that
        n = n/10;   //Before completed each iteration it will eliminate its last digit.
    }

    cout<<rev<<endl;
}