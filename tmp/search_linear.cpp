#include <iostream>
using namespace std;

void search_linear(int arr[], int size, int item);

int main(){
    int arr[5] = {33,22,55,11,44};
    search_linear(arr, 5, 99);
}

void search_linear(int arr[], int size, int item){
    for(int i=0; i<size; i++){
        if(arr[i] == item){
            cout << "found\n";
            return;
        }
    }
    cout << "not found\n";
}

// From book
void algorithm_leaner_search(int arr[], int n, int item){
    int flag = 0;
    int i = 0;
    while(i < n){
        if(arr[i] == item){
            cout << "found";
            flag = 1;
        }
        i++;
    }
    if(flag == 0){
        cout << "not found";
    }
}