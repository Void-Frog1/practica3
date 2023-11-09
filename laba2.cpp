#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");

    int num = 0;
    cout << "Введите число: ";
    cin >> num;

    
    string result = "";

    bool isRunning = true;

    int i = 0;
    
    while (isRunning)
    {
        int temp = num % 2;
        num = num / 2;
        
        result += to_string(temp);
        
        if (num <= 0)
            break;
    }

    reverse(result.begin(), result.end());

    cout << result;
}
