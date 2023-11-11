//save it easyer
#include <iostream>
using namespace std;

void tower_of_Hanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==0){
        return;
    }

    tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod);
    cout << "move disk " << n << " from " << from_rod << " to " << aux_rod << endl;
    tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod);
}

int main(){
    int n;
    cin >> n;
    tower_of_Hanoi(n, 'a', 'c', 'b');
    
    return 0;
}