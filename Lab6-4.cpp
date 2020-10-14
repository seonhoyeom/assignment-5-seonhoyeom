#include <iostream>
int getsum(int);
using namespace std;

int main()
{
  int sum, n;

  cout << "enter the input for the number of elements in list" << endl;
  cin >> n;
  sum=getsum(n);
  cout << "the sum is " << sum;
}

int getsum(int n)
{
  int i, sum=0, min, max, tsum;
  for(i=0;i<n;i++)
  {
    int num;
    cout << "enter the number : ";
    cin >> num;
    sum +=num;
    if (i==0)
    {
    max=num;
    min=num;
    }
    if (min>num)
    {
      min=num;
    }
    if(max<num)
    {
    max=num;
    }

  }
  tsum = sum -(min + max);
  return tsum;

}