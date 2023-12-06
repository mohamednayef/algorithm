#include <iostream>
using namespace std;

void find_minimum_element_in_array(int arr[], int size);

int main(){
    int arr[5] = {33,22,55,11,44};
    find_minimum_element_in_array(arr, 5);

}

void find_minimum_element_in_array(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "the minimum element is=>" << min << endl;
}