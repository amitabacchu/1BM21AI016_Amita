#include<iostream>
using namespace std;
class fact{
    public:
int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}};
int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;
fact f1;

  cout << "Factorial of " << n << " = " << f1.factorial(n);

  return 0;
}
