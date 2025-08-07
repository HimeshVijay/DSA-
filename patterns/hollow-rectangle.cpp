#include <bits/stdc++.h>
using namespace std;
void symmetry(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
            for (int j = 1; j < (n - 1) / 2 + 1; j++)
            {
                cout << "*";
            }
        else
            for (int j = 1; j <= 1; j++)
            {
                cout << "*";
            }

        if (i == 0 || i == n - 1)
        {
        }
        else
            for (int s = 0; s < n - 2; s++)
            {
                cout << " ";
            }
        if (i == 0 || i == n - 1)
            for (int j = 1; j <= n / 2 + 1; j++)
            {
                cout << "*";
            }
        else
            for (int j = 1; j <= 1; j++)
            {
                cout << "*";
            }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    symmetry(n);
}
