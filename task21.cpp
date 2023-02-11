#include <iostream>
using namespace std;
main()
{
   int one[2];
   int two[9];
   int three[11];
   for(int x=0;x<2;x++)
   {
    cout<<"enter elements of first array:";
    cin>> one[x];
   }
   for(int x=0;x<9;x++)
   {
    cout<<"enter elements of second array:";
    cin>> two[x];
   }
        cout << one[0]<<" ";
    for(int x=0;x<9;x++)
    {
    
        cout<< two[x]<<" ";
        

    }

        cout<< one[1];


}