#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){   //any particular value will be searched here using this for loop
        if(arr[i] == key){  //Loop will return only index value if value found
            return i;   
        }
    }
    return -1;  //If value doesn't exist then it will return negative one
}


int main(){
    int n;
    cout<<"Enter array size = ";
    cin>>n;

    int arr[n]; //Array declare

    for(int i=0; i<n; i++){ //This loop will take input for the array as given size
        cout<<"Enter distinct array value for "<<i<<" position = ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key for search"<<endl;
    cin>>key;

    cout<<"Index number is "<<linearSearch(arr, n, key)<<endl;  //Call linear search function


}