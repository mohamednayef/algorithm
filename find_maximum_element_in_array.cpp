#include <iostream>
using namespace std;

void find_maximum_element_in_array(int arr[], int size);

int main(){
    int arr[5] = {33,22,55,11,44};
    find_maximum_element_in_array(arr, 5);

}

void find_maximum_element_in_array(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "the maximum element is=>" << max << endl;
}