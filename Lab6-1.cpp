#include <iostream>
int inputvaild(int, int);
int getListprime(int, int);
using namespace std;
/*commit practice*/
int main()
{
  int begin , end , res;
  do
  {
    cout << "enter two numbers " << endl;
    cin >> begin >> end;
  res = inputvaild(begin, end);
  }while (res == 0);
  
  getListprime(begin , end);
}

int inputvaild(int n1, int n2)
{
  if (n1>n2 || n1<0 || n2<0)
  return 0;
  else
  return 1;
}
int getListprime(int n1, int n2)
{
  int i, j, flag;
  for(i=n1;i<n2;i++)
  {
    flag = 0;
    for (j=2;j<(i/2);j++)
    {
      if(i%j==0)
      {
        flag = 1;
        break;
      }
    }
    if (flag)
    {
      cout << "";
    }
    else
    cout << i << " is prime." <<endl;
    
  }
  return 0;
}