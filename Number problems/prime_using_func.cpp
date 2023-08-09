#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int num){
    for(int i=2; i<sqrt(num); i++){     
        if(num%i == 0){     //Loop will continue from 2 to square root of given number, check all the possibilities to find the number is not prime
            return false;
        }
    }
    return true;
}


int main(){
    int a, b;
    cout<<"Enter first integer number, (which should be less than next number) : "<<endl;
    cin>>a;
    cout<<"Enter second integer number : "<<endl;
    cin>>b;

    for(int i=a; i<=b; i++){    //This loop will continue from first number to the last given number
        if(isPrime(i)){     //Between conditional statement, call a function to check the number is prime or not
            cout<<i<<endl;
        }
    }
}