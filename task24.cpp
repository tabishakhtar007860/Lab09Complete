#include <iostream>
#include <conio.h>

using namespace std;
main()
{   
    string word;

    cout <<"enter string to remove vovels:";
    getline(cin,word);

    int size= word.length();
    
    for(int x=0;x<size;x++)
    {
        if(word[x] != 'a' && word[x] != 'e' && word[x] != 'i' && word[x] != 'o' && word[x] != 'u')
        {

            cout << word[x];
        }       


    }



}