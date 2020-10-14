#include <iostream>
using namespace std;

int main()
{
    int score;
    int numstudents, numscores ;
    int i=0, j=0, sum=0;
    string namestudents;
    float average,numcourses;

    do
    {
    cout << "enter number of students and number of courses : " << endl;
    cin >> numstudents >> numcourses;
    } while (numstudents < 0 || numcourses < 0);

    for (i=0;i<numstudents;i++)
    {
        sum=0;
        cout << "enter the name : ";
        cin >> namestudents;
        for (j=0;j<numcourses;j++)
        {
            cout << "\nenter the score : ";
            cin >> score;
            sum += score;
        }
        average = sum / numcourses;
        cout << namestudents << " | " << sum << " , " << average << endl;
    }
    return 0;

    
}