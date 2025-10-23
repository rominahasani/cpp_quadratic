#include <iostream>

using namespace std;

int main()
{
    int n;
    string answer="yes";
    while (answer=="yes")
    {
        cout << "Enter number:";
        cin >> n;
        if (n%2==0)
            cout << "Even\n";
        else
            cout << "odd\n";
        cout << "continue?(yes or no?)";
        cin >> answer;
    }

    return 0;
}
