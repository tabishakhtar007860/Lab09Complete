#include <iostream>
using namespace std;
main()
{
    int count=0;
string word;
getline(cin,word);
for(int x=0;word[x] != '\0' ;x++)
{
    
    count++;
}
for(int x=count;x>=0;x--)
{
    cout<<word[x];
}

}