#include <iostream>
using namespace std;

void binary_search(int arr[], int size, int item);

int main(){
    int arr[5] = {11,22,33,44,55};
    binary_search(arr, 5, 44);

}

void binary_search(int arr[], int size, int item){
    int repeet = 0;
    int first = 0;
    int last  = size - 1;
    int mid = (first + last) / 2;
    while(first <= last){
        repeet++;
        if(arr[mid] == item){
            cout << "found\n";
            cout << repeet << endl;
            return;
        }
        else if(arr[mid] < item){
            first = mid + 1;
            mid = (first + last) / 2;
        }
        else if(arr[mid] > item){
            last = mid - 1;
            mid = (first + last) / 2;
        }
    }
    cout << "not found\n";
    cout << repeet << endl;
    return;
}