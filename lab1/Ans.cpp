#include<iostream>
using namespace std;
void print(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

void length(int arr[], int size){
    cout << "Length of array: " << size << endl;
}

void search(int arr[], int index){
    cout << "Element:" << arr[index] << endl;
}

void largest(int arr[]){
    int large=arr[0];
    for (int i = 1; i < 6; i++){
        if (large<arr[i]){
            large=arr[i];
        }

    }
    cout << "largest:" << large << endl;
}

void smallest(int arr[]){
    int small=arr[0];
    for (int i = 1; i < 6; i++){
        if (small>arr[i]){
            small=arr[i];
        }

    }
    cout << "smallest:" <<small<<endl;
}

void insert(int arr[], int index){
    arr[index]=40;
}

void Delete(int arr[], int index){
    for (int i = index; i < 5; i++) {
        arr[i] = arr[i + 1];
    }
    arr[5] = 0;
}

void searchl(int arr[], int el){
    for (int i = 1; i < 6; i++){
        if (arr[i]==el){
            cout << "found:" <<arr[i]<<endl;
        }

    }
    
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    
    length(arr, 6);
    search(arr,3);
    largest(arr);
    smallest(arr);
    Delete(arr,2);
    insert(arr, 5);
    searchl(arr,5);
    print(arr, 6);
    return 0;
    

}
