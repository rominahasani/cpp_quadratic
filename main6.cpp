#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cout << "Enter number:";
    cin >> n;
    for (int a=0; a<n;a++)
       {
           sum=sum+a;
       }
       cout << "sum=" << sum;
    return 0;
}
