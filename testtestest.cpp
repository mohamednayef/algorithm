#include <iostream>
#include <string>

using namespace std;

int main(){
  int size;
  cout << "enter the number of problems: ";
  cin >> size;
  string arr[size];
  for(int i=0; i<size; i++){
    cout << i+1 << ") ";
    fflush(stdin);
    getline(cin, arr[i]);
  }
  for(int i=0; i<size; i++){
    cout << i+1 << ") " << arr[i] << endl;
  }

  return 0;
}
