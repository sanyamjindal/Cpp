#include<iostream>
using namespace std;

void inputarr(int arr[], int size){
    cout << "Enter array elements: " ;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void printarr(int arr[], int size){
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findelements(int arr[], int size, int sumtobefound){
    for(int i = 0; i < size; i++) {
     for(int j = 0; j < size && j != i; j++){          
                    //  for(int j = 0; j < size; j++) for including same number in pair
         if(arr[i] + arr[j] == sumtobefound){
            cout << "Elements are: " << arr[i] << " & " << arr[j] << endl;
         }
     }
    }
}

int main(){
    
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    int arr[size];
    
    inputarr(arr,size);
    printarr(arr,size);
    
    int sumtobefound;
    cout << "Enter the sum to be found: ";
    cin >> sumtobefound;
    
    findelements(arr,size,sumtobefound);
    return 0;
}