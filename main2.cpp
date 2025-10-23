#include <iostream>

using namespace std;

void x(int a,int b,int c);

int main()
{
    int a,b,c;
    cout << "Enter 3 numbers:";
    cin >> a >> b >> c;
    x(a,b,c);
    return 0;
}
void x(int a,int b,int c)
{
int miny=min(a,b,c);
miny=min(miny,c);
cout << "min=" << miny;
}
