#include <iostream>
using namespace std;

void algorithm_reorder(int arr[], int n);

int main(){
  int arr[5] = {11,22,33,44,55};
  algorithm_reorder(arr,5);
  for(int i=0; i<5; i++){
    cout << arr[i] << endl;
  }
}

void algorithm_reorder(int arr[], int n){
  for(int i=0; i<n/2; i++){
    int tmp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = tmp;
  }
}