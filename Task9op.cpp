#include <iostream>
#include <conio.h>
using namespace std;
main()
{   
    string word;
    cout <<"Enter String word:";
     getline(cin , word);

    int result = word.length();

    if( result % 2 == 0 )
    {
        cout <<"True";
    }
    else
    {
        cout <<"False";
    }








}