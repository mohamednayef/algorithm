#include <iostream>
using namespace std;

int counter = 1;
void tower_of_Hanoi(int n, char from_rod, char to_rod, char aux_rod);

int main(){
    int n;
    cin >> n;
    tower_of_Hanoi(n, 'a', 'c', 'b');
    
    return 0;
}

void tower_of_Hanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==0){
        return;
    }

    tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod);
    cout << counter++ << ") ";
    cout << "move disk " << n << " from " << from_rod << " to " << aux_rod << endl;
    tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod);

}




void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 0) { 
        return; 
    } 
    cout << counter++ << ") ";
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl; 
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
}