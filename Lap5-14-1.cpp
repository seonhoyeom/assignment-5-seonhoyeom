#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int num1,N,i;
    unsigned seed=time(0);
    srand(seed);

    ofstream ofs;
    ofs.open("data.txt");
    
    cout << "enter the N of integer : "<<endl;
   cin >> N;

    for(i=0;i<N;i++)
    {
    
    num1=rand();
    ofs << num1 <<endl;

    cout << num1 << endl;
    }
    
}
