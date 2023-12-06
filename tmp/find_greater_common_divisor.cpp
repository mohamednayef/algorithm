#include <iostream>
using namespace std;

void find_greater_common_divisor(int n1, int n2);

int main(){
    int n1 = 20;
    int n2 = 24;
    find_greater_common_divisor(n1,n2);
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
