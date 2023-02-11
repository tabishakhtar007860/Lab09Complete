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

int large = sto[0];
for(int x=0; x< number;x++)
{
if(large > sto[x])
{
    large=large;
}
else 
{
    large = sto[x];
}
}   
cout<< large;








}