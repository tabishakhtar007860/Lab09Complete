#include <iostream>
using namespace std;
main()
{
    int count = 0;
    char letter;

    string word;
    cout << "enter word:";
    getline(cin, word);
    cout << "enter character to search:";
    cin >> letter;
    int result=word.length();

    if (letter == word[result-1])
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}