// Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size:";          
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";      
    for(int i=0; i<n ; i++) {
        cin>>arr[i];
    }
    cout<<"Duplicate elements removed:";
    for(int i=0; i<n; i++) {                       //outer loop:pick each element one by one
        for(int j=i+1; j<n; j++) {                 //inner loop:compare arr[i] with all element ahead
            if(arr[i]==arr[j]) {                   // if duplicate found shift element left
                while(j<n) {                       
                    arr[j]=arr[j+1];               //overwrite duplicates
                    j++;
                }
                n--;                               //reduce array size after removing duplicates
            }
            else {
                continue;                          //if not duplicate move to next
            }
        }
    }
    for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";  }                         //print final array with unique elements
    return 0;
}