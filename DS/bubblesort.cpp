#include<iostream>
using namespace std;


//Bubble sort function
int bubblesort(int arr[], int len){

    cout<<"Before sorting = ";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //Use two arrays for sorting. Every time it will just swap two values, then after complete the iteration, it will start again from the beginning to the length - i element
    //Because after first iteration it will find the maximum value, then next iteration when occured it will find the second largerst value and so on.
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if(arr[j] > arr[j+1]){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }       
    }
    
    cout<<"After sorting = ";
    for(int i = 0; i< len; i++){    //Print sorted array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int arr[size];  //Declare array size

    for (int i = 0; i < size; i++)  //Using loop collect particular array element from user  
    {
        cout<<"Enter value for "<<i<<" : ";
        cin>>arr[i];
    }
    
    bubblesort(arr, size);  //Call the function and pass the array along with its size
}