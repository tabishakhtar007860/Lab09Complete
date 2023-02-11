#include <iostream>
using namespace std;
main()
{
    string word[3];
    for( int x=0;x<3;x++)
    {

    
    cout<<"enter word:";
    getline(cin,word[x]);
    }
    for(int x=0;x<3;x++)
    {
        cout <<"something "<<word[x];
    }
}