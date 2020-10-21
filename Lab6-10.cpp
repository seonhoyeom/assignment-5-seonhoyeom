#include	<iostream>
#include	<iomanip>
using namespace	std;

void	swap(int &, int &);
void	swap(int &, int &, int &);
void	swap(int &, int &, int &, int &);
void	getinput(int &);
void	getinput(int &, int &);
void	getinput(int &, int &, int &);
void	getinput(int &, int &, int &, int &);

int	main()
{
	int num;
	int	val1, val2, val3, val4;

	do {
		getinput(num);

		switch(num) {
			case	2:
				getinput(val1, val2);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				swap(val1,val2);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				break;
			case 	3:
				getinput(val1, val2, val3);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				swap(val1,val2, val3);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				break;
			case 	4:
				getinput(val1, val2, val3, val4);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				swap(val1,val2, val3, val4);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				break;
			default:
				break;
		}
	} while ( num != -1);
}


void getinput(int &num1)
{
  do
  {
  cout << "Please fill out how many numbers you're going to write.\n";
  cout << "The number to enter must be between two and four.";
  cin >> num1;
  } while (num1>4 || num1<-1 || num1==0);
}
void getinput(int &num1, int &num2)
{
  cin >> num1 >> num2;
}
void getinput(int &num1, int &num2, int &num3)
{
  cin >> num1 >> num2 >> num3;
}
void getinput(int &num1, int &num2,int &num3, int &num4)
{
  cin >> num1 >> num2 >> num3 >> num4;
}

void	swap(int &val1, int &val2) {
  int x;
  x = val1;
  val1 = val2;
  val2 = x;
}
void	swap(int &val1, int &val2, int &val3) {
  int min, o, max;
  min = max = val1;
  if (val2 < min) {
    min = val2;
  }
  if (val3 < min) {
    min = val3;
  }
  if (val2 > max) {
    max = val2;
  }
  if (val3 > max) {
    max = val3;
  }
  if (val2 != min && val2 != max) {
    o = val2;
  }
  if (val3 != min && val3 != max) {
    o = val3;
  }
  if (val1 != min && val1 != max) {
    o = val1;
  }
  val1 = min;
  val2 = o;
  val3 = max;
}
void	swap(int &val1, int &val2, int &val3, int &val4) {
  int x;
  x = val1;
  val1 = val2;
  val2 = val3;
  val3 = val4;
  val4 = x;
}