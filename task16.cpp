#include<iostream>
 using namespace std;
main()
{
    int number;
    cout << "enter number:";
    cin >> number;
    int sto[number];
    for (int x = 0; x < number; x++)
    {
        cout << "enter array elements:";
        cin >> sto[x];
          for( int y=0;y<x;y++)
        {
            if (sto[x] == sto[y] )
            {
                cout << "already entered!";
                
            }
        }
        
    }




    for (int x = 0; x < number; x++)
        {
            cout << sto[x] <<endl;
        }
}
