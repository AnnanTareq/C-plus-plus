#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n]; //Array declare

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value for "<<i<<" position : ";
        cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];   //Store i'th value at current
        int prev = i - 1;   //Previous position

        while (arr[prev] > current && prev >= 0){ //Check the previous value is greater than current or not
            arr[prev+1] = arr[prev];    //Move right each particular value till condition become false
            prev--;
        }
        arr[prev+1] = current;  //Now, situation arise like, two consecutive positions value has same. Because all values shifted to the right. 
        //Here previous position is the same as that position which cause for condition false. So, add one and find the desired position for store the value.
     }

    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}