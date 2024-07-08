#include <iostream>
using namespace std;

int add_odd(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      sum = sum + i;
    }
  }
  return sum;
}

int add_even(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum = sum + i;
    }
  }
  return sum;
}

int main() {
  int n;
  cout << "enter a number : ";
  cin >> n;

  // n must be in range of 1 to 1000
  if (n < 1 || n > 1000) {
    cout << "invalid input range, must be between 1 to 1000" << endl;
    return 0;
  }

  int odd_sum = add_odd(n);
  cout << "odd sum : " << odd_sum << endl;
  int even_sum = add_even(n);
  cout << "even sum : " << even_sum;
}