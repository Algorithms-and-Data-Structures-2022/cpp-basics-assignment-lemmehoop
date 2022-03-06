#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int diff = left - right;
    int sqr = diff * diff;

    return sqr;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask < 0 || bit_pos < 0) {
      return false;
    } else {
      int count = 0;
      while (mask > 0) {
        if (mask % 2 == 1 && count == bit_pos) {
          return true;
        }
        mask /= 2;
        count += 1;
      }
    return false;
    }

  }

  // Task 3
  int max3(int left, int middle, int right) {

    if (left > middle) {
      if (left > right) {
        return left;
      } else {
        return right;
      }
    } else {
      if (middle > right) {
        return middle;
      } else {
        return right;
      }
    }

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left == 0 || right == 0) {
      return;
    } else {
      int n = *left;
      *left = *right;
      *right = n;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == 0 || length <= 0) {
      return 0;
    } else {
      int sum = 0;
      for (int i = 0; i < length; i++) {
        sum += arr[i];
      }
      return sum;
    }

  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return nullptr;
    } else {
      int* max = &arr[0];
      for (int i = 1; i < length; i++) {
        if (*max < arr[i]) {
          max = &arr[i];
        }
      }
      return max;
    }

  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    }
    int* arr = new int[length];
    std::fill(arr, arr + length, init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }
    int* new_arr = new int[length];
    std::copy(arr_in, arr_in + length, new_arr);
    return new_arr;

  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      int i = 0;
      while (i < length) {
        os << arr[i] << "\t";
        i += k;
      }
    }
  }

}  // namespace assignment
