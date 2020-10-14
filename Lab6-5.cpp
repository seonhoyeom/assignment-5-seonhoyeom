#include	<iostream>
using namespace	std;

int	evensumGet(int);
int	oddsumGet(int);

int	main()
{
	int evenSum=0,oddSum=0; 
	int	input;

  cout << "To stop adding numbers, enter -1 " << endl;

	do
	{
		cout << " Enter your input \n";
		cin >> input;
		if ( input == -1)
			break;
		else if ( input % 2)
			oddSum = oddsumGet(input);
	      	else 
			evenSum = evensumGet(input);
	} while (1);
	cout << oddSum << ": The summation of all Odd inputs" << endl;
	cout << evenSum << ": The summation of all Even inputs" << endl;
}

int evensumGet(int n)
{
  static int sum=0;

  sum+=n;
  return sum;
}

int	oddsumGet(int n) 
{
  static int sum = 0;

  sum += n;
  return sum;
}