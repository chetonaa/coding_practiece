#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;
  int nums[SIZE] = {};
  
  // taking array inputs
  for (int i = 0; i < SIZE; i++) {
    cout << "Enter a number for index" << i << " :";
    cin >> nums[i];
  }
  // printing array values
  for (int i = 0; i < SIZE; i++) {
    cout << nums[i] << endl;
  }
}