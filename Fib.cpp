#include <iostream>
using namespace std;

class fib1
{
    public:
int fib(int x) {
   if((x==1)||(x==0))
    {
      return(x);
   }
   else {
      return(fib(x-1)+fib(x-2));
   }
   }
};
int main()
 {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   fib1 f1;
   while(i < x)
    {
      cout << " " << f1.fib(i);
      i++;
   }
}
