// Enter your name: chetona
// Print name in order: chetona
// Print name Reversed order: anotehc

#include <iostream>
using namespace std;

void print(string name) {
  for (int i = 0; i < name.size(); i++) {
    cout << name[i];
  }
  cout << endl;
}

void printReverseOrder(string name) {
  int lastIndex = name.size() - 1;
  for (int i = lastIndex; i >= 0; i--) {
    cout << name[i];
  }
  cout << endl;
}

int main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Print name in order: ";
  print(name);
  cout << "Print name Reversed order: ";
  printReverseOrder(name);
}