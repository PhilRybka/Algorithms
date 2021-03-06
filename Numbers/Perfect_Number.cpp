// Source:  http://www.algorytm.edu.pl/algorytmy-maturalne/liczby-doskonale.html

#include<iostream>
#include<cmath>
using namespace std;

bool isPerfect(int n)
{
  int s = 1, p = sqrt(n);
  for(int i=2; i*i<n; i++)
    if(n%i == 0)
  //addition of two divisors
      s+= i + n/i;

  //if we have a square number
  //we added its square two times
  //we need to substract it now
  if(n == p*p) s-=p;

  //if sum of divisors is equal to the given number, the number is perfect
  if(n == s) return 1;

  return 0;
}

int main()
{
  int n;
  cin>>n;
  cout<<isPerfect(n);

  return 0;
}
