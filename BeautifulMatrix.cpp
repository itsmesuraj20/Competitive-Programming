#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5], r = 0, c = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                r = abs(2 - i);
                c = abs(2 - j);
                break; // stop scanning the matrix after the first occurrence of 1
            }
        }
    }

    cout << r + c;

    return 0;
}
