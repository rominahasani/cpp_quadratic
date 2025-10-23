#include <iostream>

using namespace std;

int main()
{
    float s;
    cout << "Enter your score:";
    cin >> s;
    if (s>=18 && s<=20)
        cout << "A";
    else if (s>16 && s<18)
             cout << "B";
         else if (s>=16 && s<=16)
                  cout << "C";
              else
                  cout << "Error!";
    return 0;
}
