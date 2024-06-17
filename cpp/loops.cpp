#include <iostream>
using namespace std;
int main() {
    int counter = 1;
    int limit = 10;
    while (counter <= limit) {
        cout << counter<< ". My name is Chetona"<< endl;
        counter++;
    }
    
    // converting the same while loop in for loop
    for (int counter = 0; counter < 10; counter++) {
        cout << counter << ". chetona" << endl;
    }
}