#include <iostream>
using namespace std;

void sort_insertion(int arr[], int size);
void print_array(int arr[], int size);

int main(){
    int arr[] = {33,22,55,44,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "the array before sortin=>";
    print_array(arr,size);

    sort_insertion(arr,size);

    cout << "the array after  sortin=>";
    print_array(arr,size);

    return 0;
}

void sort_insertion(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j] < arr[j-1]){
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
            else{
                break;
            }
        }
    }
}

void print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}