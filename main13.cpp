#include <iostream>

using namespace std;

void x(int a,int b);

int main()
{
    int a,b;
    cout << "tol:";
    cin >> a;
    cout <<"arz:";
    cin >> b;
    x(a,b);
    return 0;
}
void x(int a,int b)
{
  if (a<=b)
    cout << "Error!";
  else
    cout << "mohit=" << a+a+b+b << endl << "masahat=" << a*b;
}
