#include <iostream>
using namespace std;

void sort_bubble(int arr[], int size);

int main(){
    int arr[] = {33,22,55,44,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "the array before sorting=>";
    for(int i=0; i<size; i++){
        cout << arr[i] << ' ';
    }
    sort_bubble(arr,size);
    cout << "\nthe array after  sorting=>";
    for(int i=0; i<size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';

}

void sort_bubble(int arr[], int size){
    for(int i=0; i<size-1; i++){
        bool flag = false;
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = true;
            }
        }
        if(flag == false){
            return;
        }
    }
}