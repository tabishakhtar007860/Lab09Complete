#include <iostream>
using namespace std;
main()
{
    int count = 0;
    char letter;

    string word;
    cout << "enter word:";
    getline(cin, word);
   int c= word.length();
   int idx=0;
   while(word[idx] != '\0')
   {
    cout<<++word[idx];
    idx++;
   } 

   
}