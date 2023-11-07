#include <iostream>
using namespace std;

void find_max_element_in_matrix(int mat[][3], int cols, int rows);

int main(){
    int mat[3][3] ={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    find_max_element_in_matrix(mat,3,3);

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