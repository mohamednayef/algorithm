#include "../header/algorithm.hpp"
#include <iostream>
using namespace std;

void print(void){
  cout << "mohamednayef\n";
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

int fac(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * fac(n-1);
    }
}

int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }

}

void find_greater_common_divisor(int n1, int n2){
    while(n1 != n2){
        if(n1 > n2){
            n1 -= n2;
        }
        else{
            n2 -= n1;
        }
    }
    cout << "the greater common divisor is=>" << n2 << endl;
}

void find_max_element_in_matrix(int mat[][3], int cols, int rows){
    int max = mat[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(max < mat[i][j]){
                max = mat[i][j];
            }
        }
    }
    cout << "the maximum element is=>" << max << endl;
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

void find_second_element_in_array(int arr[], int size){
    int max = arr[0];
    int smax = arr[0];
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i]){
            smax = arr[i];
        }
    }
    cout << "the second max is=>" << smax << endl;
}

int power(int x, int y){
    int product = x;
    for(int i=1; i<y;i++){
        product *= x;
    }
    return product;
}

void algorithm_reorder(int arr[], int n){
  for(int i=0; i<n/2; i++){
    int tmp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = tmp;
  }
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

void small_number_between_three_numbers(int n1, int n2, int n3){
    if(n1 < n2){
        if(n1 < n3){
            cout << "the smallest number is=>" << n1 << endl;
        }
        else{
            cout << "the smallest number is=>" << n3 << endl;
        }
    }
    else{
        if(n2 < n3){
            cout << "the smallest number is=>" << n2 << endl;
        }
        else{
            cout << "the smallest number is=>" << n3 << endl;
        }
    }
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

void sort_insertion(int arr[], int size){
    for(int i=0; i<size; i++){
        int minimum = i;
        for(int j=i+1; j<size; j++){
            if(arr[minimum] > arr[j]){
                minimum = j;
            }
        }
        if(minimum != i){
            int tmp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = tmp;
        }
    }
}

void tower_of_Hanoi(ll n, char from_rod, char to_rod, char aux_rod){
    if(n==0){
        return;
    }

    tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod);
    // cout << "move disk " << n << " from " << from_rod << " to " << aux_rod << endl;
    tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod);
    // counter++;
}

void trace_of_matrix(int mat[][3], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
    }
    cout << "the trace is=>" << sum << endl;
}