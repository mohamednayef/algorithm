//save it easyer
#include <iostream>
using namespace std;

void Hanoi(int n, char a, char c, char b) {
    if (n == 1) {
        cout << "Move disk 1 from " << a << " to " << c << endl;
        return;
    }

    Hanoi(n - 1, a, b, c);
    cout << "Move disk " << n << " from " << a << " to " << c << endl;
    Hanoi(n - 1, b, c, a);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    Hanoi(n, 'a', 'b', 'c');

    return 0;
}
