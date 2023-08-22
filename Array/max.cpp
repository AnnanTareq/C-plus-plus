#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int array[size];
    for (int i = 0; i < size; i++)  //Taking through this loop
    {
        cout<<"Enter value : ";
        cin>>array[i];
    }


    int max;    //Initialize a variable which stores maximum value in each iteration

    for (int i = 0; i < size; i++)  //Check all the values of array by this loop
    {
        if(array[i] == array[0]){   //By this conditional statement initialize max value with first value of array. Because, max variable just declared, not initialized.
            max = array[i];
        }
        else if(array[i]>max){   //Only execute this block while any value found which is greater than max
            max = array[i];
        }
    }
    
    cout<<"Max = "<<max<<endl;
    
    
}