#include <iostream>
using namespace std;
main()
{
    float num,sum=0;
    cout<<"enter number to compare:";
    cin  >> num;
    float number[4];
     for(int x=0;x<4;x++)
   {
   
        cout<<"enter array element" << x+1<< ": ";
        cin >> number[4];
   }
   for(int x=0;x<4;x++)
   {
     sum=sum+(number[x]*number[x]/100);

   }
   if( num == sum )
   {
    cout << "True";
    }
    else
    {
        cout<< "false";
    }
}