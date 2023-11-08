#include <iostream>
using namespace std;

void print_size_of_array(int arr[]);


int main(){
    int arr[] = {11,22,33,44,55};
    // print_size_of_array(arr);
    cout << "the size of array is=>" << sizeof(arr) / sizeof(arr[0]) << endl;
    return 0;
}

// void print_size_of_array(int arr[]){
    // cout << "the size of array is=>" << sizeof(arr) / sizeof(arr[0]) << endl;
//     return;
// }