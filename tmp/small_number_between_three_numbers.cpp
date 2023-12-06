#include <iostream>
using namespace std;

void small_number_between_three_numbers(int n1, int n2, int n3);

int main(){
    int n1, n2, n3;
    cout << "enter the three numbres: ";
    cin >> n1 >> n2 >> n3;
    small_number_between_three_numbers(n1,n2,n3);

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