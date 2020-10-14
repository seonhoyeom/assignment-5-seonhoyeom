//type 1
// #include <iostream>
// using namespace std;

// int main() // type 1
// {
//     int i, j;

//     for(i=0;i<3;i++)
//     {
//         cout << "\n";
//         for(j=0;j<=i;j++)
//         cout <<" ( "<< i << " , " << j << " ) ";
//     }

//type 2
// #include <iostream>
// using namespace std;

// int main()
// {
//   int i, j;

//   for(i=0;i<3;i++)
//   {
//     cout << "\n";
//     for(j=i;j<3;j++)
//     cout << " ( " << i << " , " << j << " ) ";
//   }
// }

//type 3
// #include <iostream>
// using namespace std;

// int main()
// {
//   int i, j, num=2;
//   for (i=0;i<3;i++)
//   {
//     cout << " \n ";
//     for(j=2;j>=num;j--)
//     cout << " ( " << i << " , " << j << " ) ";
//     num--;
//   }
// }