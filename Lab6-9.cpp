#include	<iostream>
#include	<iomanip>
using namespace	std;

void	getinput(int &, int &, int &);
void	maxmin(int, int, int, int &, int &);

int	main()
{
	int num1, num2, num3;	
	int	max, min;
	getinput(num1, num2, num3);
	cout << " Your input " << setw(5) << num1 << setw(5) << num2 <<setw(5) <<  num3 << endl;
	maxmin(num1, num2, num3, max, min);
	cout << " Max, Min and Max-Min" << setw(5) << max << setw(5) << min <<setw(5) <<  max-min << endl;

}

void getinput(int &num1,int &num2, int &num3) 
{
  cout << "Please enter three numbers.";
  cin >> num1 >> num2 >> num3;
  return;
}


void maxmin(int num1, int num2, int num3, int &max, int &min)
{

  max = min = num1;
  if ( min > num2)
    min = num2;
  if ( min > num3)
    min = num3;
  if ( max < num2)
    max = num2;
  if ( max < num3)
    max = num3;
}