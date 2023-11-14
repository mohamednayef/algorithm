#include <iostream>
using namespace std;

int power(int x, int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << power(x,y) <<endl;

    return 0;
}

int power(int x, int y){
    int product = x;
    for(int i=1; i<y;i++){
        product *= x;
    }
    return product;
}
