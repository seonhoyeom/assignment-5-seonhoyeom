#include <iostream>
using namespace std;

int main() {
    int i,num, n;
    int j = 0;
    unsigned seed = time(0);
    srand(seed);
    num = rand() % (1000 + 1) + 0;

    for (i = 0; i < 10; i++) 
    {
        cout << "Enter a number "<<endl;
        cin >> n;
        j++;

        if (!(n == num)) {
            if ( (n < num) && (j <= 9 ) ) {
                cout << "Too low, try again \n";
            }
            else if ( (n > num) && (j <= 9 ) ) {
                cout << "Too high, try again \n";
            }
            else {
                cout << "sorry"<<endl;
            }
        }
        else {
            if ( j <= 10) {
            cout << "good";
            cout << tries << "is taken"<<endl;
            exit(0);
          }
        }
    }
    return 0;

}