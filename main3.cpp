#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "tedade rooz haye omretan ra vared konid:" ;
    cin >> a;
    cout << a/365 << " years and " << (a%365)/30 << " months and " << (a%365)%30 << " days." << endl;
    return 0;
}
