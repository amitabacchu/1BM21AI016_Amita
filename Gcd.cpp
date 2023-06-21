#include <iostream> 
using namespace std;

class gcd{
public:
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}};

int hcf(int n1, int n2);

int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << endl;

   gcd f1;
   f1.hcf(n1, n2);


   return 0;
}
