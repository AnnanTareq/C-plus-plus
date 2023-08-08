#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int given_value = n;

    while(n>0){
        int last_digit = n%10;  //This will find the last digit of given input
        long long p_val = abs(pow(last_digit, 3));  //pow() function uses type:double as its first & second parameters. So it gives wrong output sometimes. Thats why use long long as data type.
        sum += p_val;
        n = n/10;   //This will reduce n value
    }

    if (sum == given_value) //Checking the given number is armstrong or not
    {
        cout<<"Yes, it is a armstrong value"<<endl;
    }else{
        cout<<"This is not a armstrong value"<<endl;
    }
    

}
