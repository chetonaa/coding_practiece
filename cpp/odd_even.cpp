#include <iostream>
using namespace std;

void print_odd_even(int num) {
  if (num % 2 == 0) {
    cout<<"even number";
  }
  else {
    cout<<"odd number";
  }
}

int main(void) {
  int num;
  cout<<"enter a number : ";
  cin>>num;
  print_odd_even(num);
}