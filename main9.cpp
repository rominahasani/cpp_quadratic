#include <iostream>

using namespace std;

int main()
{
    int a,b,i,miny;
    while (true)
    {
        cout << "Enter first number:";
        cin >>a;
        cout << "Enter second number:";
        cin >>b;
        int miny;
        miny=min(a,b);
        for (int i=1;i<=miny;i++)
    {
           if (a%i==0 && b%i==0)
                cout << i << endl;
    }}

    return 0;
}

