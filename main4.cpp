#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char c;
    cout << "ebarte morde nzrtan ra vared nmaeid:";
    cin >> a >> c >> b;
    if (c=='+')
        cout << a << '+' << b << '=' << a+b << endl;
    else if (c=='-')
        cout << a << '-' << b << '=' << a-b << endl;
         else if (c=='*')
        cout << a << '*' << b << '=' << a*b << endl;
              else if (c=='/')
              {
                   if (b!=0)

                       cout << a << '/' << b << '=' << a/b << endl;
                   else
                       cout << "Error!";
                       }
                   else
                       cout << "Error!";
    return 0;
}
