#include <iostream>
#include "../header/algorithm.hpp"
using namespace std;

int main(){
  int arr[5] = {33,22,55,11,44};

  sort_bubble(arr,5);

  display_arr(arr,5);


  return 0;
}