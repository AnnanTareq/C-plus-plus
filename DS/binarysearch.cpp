#include<iostream>
using namespace std;

//Binary search only occured in that case where array is sorted in increasing order

int binarySearch(int arr[], int size, int key){
    int start = 0;  //initially start with first index
    int end = size; // and last index

    while (start <= end)    //This loop will continue till the start equal to end
    {
        int mid = (start + end)/2;  //This will find the mid of index

        if(arr[mid] == key){    //When mid indexed value equal to given value it execute and return index number
            return mid;
        }else if(arr[mid]>key){ //It execute when key value is less than middle indexed value 
            end = mid - 1;  //and end index come to the previous index of middle index
        }else{
            start = mid + 1;    //starting index initialized newly to the next of middle value, when key value is greater than middle indexed value
        }
    }
    return -1;
    

}


int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int arr[n]; //Create an n size array
    for(int i=0; i<n; i++){ //Using loop put value in the array
        cin>>arr[i];
    }

    int key; 
    cout<<"Enter key, which you want to search: ";
    cin>>key;

    cout<<binarySearch(arr, n, key)<<endl;  //Call binary search function and pass all the required parameters
}