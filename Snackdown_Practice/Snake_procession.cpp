// Problem: https://www.codechef.com/SDPCB21/problems/SNAKPROC

#include <bits/stdc++.h>

using namespace std;

string check_valid_snake(string proc)
{
    int cnt_dot = 0, cnt = 0;
    for (int i = 0; i < proc.length(); i++)
    {
        if (proc[i] == '.')
            cnt_dot++;
        else if (proc[i] == 'T')
        {
            if (cnt == 1)
                cnt--;
            else
                return "Invalid";
        }
        else
            cnt++;
    }
    if (cnt_dot == proc.length())
        return "Valid";
    else if (cnt == 0)
        return "Valid";
    else
        return "Invalid";
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string proc;

        cin >> proc;

        cout << check_valid_snake(proc) << endl;
    }

    return 0;
}
