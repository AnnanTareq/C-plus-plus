#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter array Size : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array element for "<<i<<" position : ";
        cin>>arr[i];
    }

    //In selection sort we use two loops for comparing
    for(int i=0; i<n-1;i++){    //Here one loop started from the very beginning to the second last element
        for (int j = i+1; j < n; j++)   //Now, It starts from the 2nd position of the loop to the end
        {
            //While this conditional statement executing, that means it compare any particular value of i with rest of the values which index stands as j 
            if(arr[j]<arr[i]){  
                int temp = arr[j];  //First store the value of j'th position in any temporary variable
                arr[j] = arr[i];    //then, i'th position value store in the j'th position in the array
                arr[i] = temp;  //now, temp value stored in the i'th position
            }
        }
        
    }

    cout<<"Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}