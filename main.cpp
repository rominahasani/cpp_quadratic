#include <iostream>

using namespace std;

int main()
{
    int a,n,t;
    cout << "Enter a number:";
    cin >> a;
    t=0;
    n=1;
    while(n<=a)
    {
        if (a%n==0)
            t++;
            n++;
    }
    if (t==2)
        cout << "add aval ast.";
    else
        cout << "add aval nist.";
    return 0;
}
