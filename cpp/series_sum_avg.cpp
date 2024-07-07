#include <iostream>
using namespace std;

int sum_all(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }
  return sum;
}

int main() {
  int n;
  cout << "enter a number : ";
  cin >> n;
  int sum = sum_all(n);
  cout << "sum= " << sum << endl;
  float avg = sum / n;
  cout << "avg= " << avg;
}