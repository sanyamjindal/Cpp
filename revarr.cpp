#include<iostream>
using namespace std;

void inputarr(int arr[], int size){
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void printarr(int arr[], int size, string s){
    cout << s;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void revarr(int arr[], int size){
    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }   
}

int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    int arr[size];
    
    inputarr(arr, size);
    printarr(arr, size, "Array elements are: ");
    revarr(arr, size);
    printarr(arr, size, "Elements after swapping: ");

    return 0;
}
