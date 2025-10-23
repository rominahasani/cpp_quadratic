#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    if (a==0)
        cout<<"Error!";
    else
        cout<<"x="<<-b/a;
    return 0;
}
