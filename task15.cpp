#include <iostream>
using namespace std;
main()
{
int number;
cout<<"enter number:";
cin>> number;
int sto[number];
for(int x=0;x< number;x++)
{
    cout<< "enter array elements:";
    cin>> sto[x];
    
}
for(int x=number-1;x>=0 ;x--)
{
    cout<< sto[x] <<endl;
}

}