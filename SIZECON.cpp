#include <iostream>

using namespace std;

int main()
{
    int t, n, s;
    s = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        if(n > 0)
        {
           s = s + n;
        }
    }
    cout << s;
    return 0;
}
