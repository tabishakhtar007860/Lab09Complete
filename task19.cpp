#include <iostream>
using namespace std;
main()
{
int number;
int sto[number];
cout<<"enter number:";
cin>> number;
for(int x=0;x< number;x++)
{   
    cout <<"Enter Array elements:";
    cin >>  sto[x];
}

int small = sto[0];
for(int x=0; x< number;x++)
{
if( small < sto[x])
{
    small=small;
}
else 
{
    small = sto[x];
}
}   
cout<< small ;








}