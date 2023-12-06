#include <iostream>
using namespace std;

void sort(int arr[], int size);

int main(){
    int arr[5] = {33,22,55,11,44};
    cout << "the array before sorting=> ";
    for(int i=0; i<5; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    sort(arr,5);
    cout << "the array after  sorting=> ";
    for(int i=0; i<5; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

}

void sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}