#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {
  int arr[5] = {1,2, 3, 4, 5};
  print_kth_elements(arr, 5, 3);
}