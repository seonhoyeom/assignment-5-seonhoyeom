#include	<iostream>
using namespace	std;
int getListprime(int begin=0, int end = 100);

int	main()
{
	int	begin, end;
	do 
  {
		cout << "Enter your input (two integers for range ). The two inputs must be positive integers. \n";
		cin >> begin >> end;
		if (begin < end )
    {
		  getListprime(begin, end);
    }
		else if ( begin > end)
		{
       	getListprime();
    }
		else 
		{
       	getListprime(begin);
    }
	} while ( begin != -1);
}


int getListprime (int begin, int end)
{ 
  int i, j;
  int flag =0;

   for(i=begin; i<end; i++)
   {
     for (j=2; j < (i/2); j++)
     {
       flag = 0;
       if (i % j == 0)
        {
          flag = 1;
          break;
        }
     } 
   if (flag)
      cout << " ";
   else
       cout << "The number " << i << " is prime.\n";
    }
    return 0;
}    