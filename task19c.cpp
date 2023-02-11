#include <iostream>
using namespace std;
main()
{
    int number, result;
    cout << "enter number:";
    cin >> number;
    int sto[number];
    for (int x = 0; x < number; x++)
    {
        cout << "enter array elements:";
        cin >> sto[x];
    }
    int check = sto[0];

    for (int x = 0; x < number; x++)
        {
            if (check > sto[x])
            {
                result= sto[x] ;
            }
            else
            {
                  result= check;
            }
        }
        cout <<result;
}
