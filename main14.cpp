#include <iostream>

using namespace std;

void x(int a);

int main()
{
    int a;
    cout << "Enter seconds:";
    cin >> a;
    x(a);
    return 0;
}
void x(int a)
{
int h=a/3600;
int m=(a%3600)/60;
int s=a%60;
cout << h << ":" << m << ":" << s;
}
