#include <iostream>
using namespace std;

void trace_of_matrix(int mat[][3], int n);

int main(){
    int mat[3][3] ={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    trace_of_matrix(mat, 3);
    
}

void trace_of_matrix(int mat[][3], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
    }
    cout << "the trace is=>" << sum << endl;
}