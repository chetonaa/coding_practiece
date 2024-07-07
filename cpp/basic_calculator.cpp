// Function Writing
#include <iostream>
using namespace std;

float add(float num1, float num2) { return num1 + num2; }

float sub(float num1, float num2) { return num1 - num2; }

float mul(float num1, float num2) { return num1 * num2; }

float division(float num1, float num2) {
  if (num2 == 0) {
    cout << "Can't devided by Zero" << endl;
    return 0;
  }
  return num1 / num2;
}

int main() {
  float num1, num2;
  cout << "Input number 1: ";
  cin >> num1;
  cout << "Input number 2: ";
  cin >> num2;

  // calling the add function
  float res = add(num1, num2);
  cout << "add result = " << res << endl;

  // calling sub function
  res = sub(num1, num2);
  cout << "sub result = " << res << endl;

  // calling mul function
  res = mul(num1, num2);
  cout << "mul result = " << res << endl;

  // calling division function
  res = division(num1, num2);
  cout << "division result = " << res << endl;
}