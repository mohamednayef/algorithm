#include <iostream>
using namespace std;

void display_arr(int arr[], int n);
void swap(int &n1, int &n2);
void bubble_sort(int arr[], int n);
void selectoin_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void quick_sort(int arr[], int n);
void merge_sort(int arr[], int n);

int main(){
    int arr[5] = {3,2,5,4,1};
    cout << "the array before sorting=>";
    display_arr(arr, 5);

    selectoin_sort(arr,5);

    cout << "the array after  sorting=>";
    display_arr(arr,5);



    return 0;
}

void display_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void swap(int &n1, int &n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectoin_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

void insertion_sort(int arr[], int n){
    
}

void quick_sort(int arr[], int n);

void merge_sort(int arr[], int n);
