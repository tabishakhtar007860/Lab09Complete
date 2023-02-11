#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter word  :";
    getline(cin,word);
    int vovel =0;
    int result=word.length();
      
    for(int x=0;x<  result; x++ )
    {
        if(word[x]=='a' || word[x]=='e' || word[x]== 'i' || word[x] == 'o' || word[x] == 'u')
        {
            vovel++ ;
        }
        
    
    }
       cout<<"number of vovel      :"<<vovel;
}