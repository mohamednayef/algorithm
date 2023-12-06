//save it easyer
#include <iostream>
using namespace std;
#define ll long long
ll counter = 0;

void tower_of_Hanoi(ll n, char from_rod, char to_rod, char aux_rod){
    if(n==0){
        return;
    }

    tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod);
    // cout << "move disk " << n << " from " << from_rod << " to " << aux_rod << endl;
    tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod);
    counter++;
}

int main(){
    ll n;
    cin >> n;
    tower_of_Hanoi(n, 'a', 'c', 'b');
    cout << counter;
    return 0;
}