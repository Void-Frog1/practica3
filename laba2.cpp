#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    int arr[6]
    {
        1 ,-2 ,56 ,-34 ,23 ,-1
    };
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] >= 0)
            cout << arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
            cout << arr[i];
    }
 }
