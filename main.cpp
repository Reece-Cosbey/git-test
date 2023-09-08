
#include <iostream>

using namespace std;
int sum(int n){
  int i = 1;
  int n2 = n;
  while (i != n){
    n2 = n2 + i;
    i++;
  }
  return n2;
}
int main() {
  int number;
  cout << "Input a number ";
  cin >> number;
  number = sum(number);
  cout << number << endl;
  return 0;
}
