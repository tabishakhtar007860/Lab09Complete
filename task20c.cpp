#include <iostream>
using namespace std;
main()
{
int number;
cout<<"enter number of resister to take:";
cin>> number;
int resistor[number];
int sum=0;
for(int x=0;x<number;x++)
{
    cout<<"enter resistance "<<x+1;
    cin >> resistor[x];

}
    for(int x=0;x<number;x++)
    {
        sum = sum+resistor[x];
    }    

cout<< sum;
}