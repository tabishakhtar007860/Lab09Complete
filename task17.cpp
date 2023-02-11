#include<iostream>
 using namespace std;
main()
{
    int number,scalar;
    cout << "enter number:";
    cin >> number;
    int sto[number];
    for (int x = 0; x < number; x++)
    {
        cout << "enter array elements:";
        cin >> sto[x];

    
         
        
    }
    cout<<"enter a number for multiply  ";
    cin>> scalar;



    for (int x = 0; x < number; x++)
        {
            cout << sto[x]*scalar <<endl;
        }
}
