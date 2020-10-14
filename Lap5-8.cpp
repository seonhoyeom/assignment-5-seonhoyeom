#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,n,num;

    cout << "enter the number. the range is 0 to 1300 \n";
    cin >> i;

    if (i>=0 && i<=1300)
    
    {
        cout << " [ 0 , "<< i << " ] : ";
        for (n=0;pow(2 , n)<=i;n++) // range includes the user input
       {

       num = 1; //Because if you start from zero, you can't multiply.
        num = pow(2 , n);
        cout << num << ", ";
        }
     }
    else
    {
        cout << "Not found"<< endl;
    }
    
}