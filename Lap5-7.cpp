#include <iostream>
using namespace std;

int main()
{
    int n,num,i;
    int n_thpower=1; //Because if you start from zero, you can't multiply(1).
    float invertn_thpower=1;//Because if you start from zero, you can't multiply(2).

    cout << "enter the number : \n";
    cin >> n;

    if (n>0)
        num=n;

    else if (n<0)
    num=n*-1;

    for (i=0;i<num;i++)
    {
        n_thpower*=2;
    }

    if(n<0)
    {
        invertn_thpower= 1.0/n_thpower;
    cout << "2**(number of you write) = " << invertn_thpower<<endl;

    }
    else if(n>0)
    cout << "2**(number of you write) = " << n_thpower<<endl;

    else
    cout << "2**(number of you write) = 1" << endl; //2**0 = 1

}
