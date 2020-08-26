#include <iostream>

using namespace std;

int FindFibonacciIterative(int n) {
  int previous = 1;
  int current = 1;
  for (int i = 2; i < n; i++) {
    int sum = previous + current;
    previous = current;
    current = sum;
  }
  return current;
  
}

int FindFibonacciRecursive(int n) {
  return  1;
}

int main() {
  int x ;
  cout << "Enter the number of terms of series : ";
  cin >> x;

  cout << "\nFibonnaci Series Number: " << FindFibonacciIterative(x) <<"\n";

    cout << "\nFibonnaci Series Number: " << FindFibonacciRecursive(x) <<"\n";
     
   return 0;
}

