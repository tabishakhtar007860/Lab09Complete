#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter how many numbers you want to take:";
    cin >> size;
    int number[size];
    for( int x=0;x<size ;x++)
    {
        cout << "Enter Number "<<x+1<<" :";
        cin >> number[x];
       


    }

for( int x=0;x<size ;x++)
    {
       
        cout <<number[x]<<endl;


    }






}