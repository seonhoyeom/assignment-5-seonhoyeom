#include <iostream>
using namespace std;
int main()
{
      

  int begin, end,i, j;
  int flag=0;
  do 
  {
   cout << "enter two number \n";
   cin >> begin >> end;
  } while ( (begin > end)|| (begin<0) || (end<0) );
        
    for (i=begin; i<=end; i++) 
      {
        flag = 0;
          for(j=2; j<=(i/2); j++ )
          {
           if (i % j == 0) 
            {
            flag = 1;
             break;
            }
              }

              if (flag)
                  cout << "The number " << i << " is not a prime number\n";
              else
                  cout << "The number " << i << " is a prime number\n";
        }
} 