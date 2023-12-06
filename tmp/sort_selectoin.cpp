#include <iostream>
using namespace std;

void sort_insertion(int arr[], int size);
void print_array(int arr[], int size);

int main(){
    int arr[] = {33,22,55,44,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the array before sorting=>";
    print_array(arr,size);
    sort_insertion(arr,size);
    cout << "the array after  sorting=>";
    print_array(arr,size);

    return 0;
}

void sort_insertion(int arr[], int size){
    for(int i=0; i<size; i++){
        int minimum = i;
        for(int j=i+1; j<size; j++){
            if(arr[minimum] > arr[j]){
                minimum = j;
            }
        }
        if(minimum != i){
            int tmp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = tmp;
        }
    }
}

void print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}