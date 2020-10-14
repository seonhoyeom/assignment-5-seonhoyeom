#include <iostream>
#include <cmath>
using namespace std;
double nthpowerp(int);
double nthpowern(int);
void printout(double);

int main()
{
  int n;
  double result;
  cout << "enter your input" << endl;
  cin >> n;

  if(n>0)
  {
    result = nthpowerp(n);
  }
  else if (n<0)
  {
    result = nthpowern(n);
  }
  else
  result = 1;

  printout(result);
}

double nthpowerp(int num)
{
  double res;
  res = pow(2, num);

  return res;
}
double nthpowern(int num)
{
  int cnum;
  cnum = num*-1;
  double res;
  res = 1/pow(2, cnum);

  return res;
}
void printout(double tres)
{
  cout << "the result is " << tres << endl;
}