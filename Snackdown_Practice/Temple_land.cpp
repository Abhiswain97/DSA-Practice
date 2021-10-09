// Problem: https://www.codechef.com/SDPCB21/problems/TEMPLELA
// Reference from: https://www.codechef.com/viewsolution/52196386

#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(int argc, char const *argv[])
{
    ll t, len;

    cin >> t;

    vector<string> result;

    while (t--)
    {
        cin >> len;

        vector<ll> v;
        for (ll i = 0; i < len; i++)
        {
            ll n;
            cin >> n;
            v.push_back(n);
        }

        if (v.size() % 2 == 0)
            cout << "no" << endl;
        else
        {
            int flag = 1;
            int low = 0;
            int high = v.size() - 1;
            int count = 1;
            while (low <= high)
            {
                if (v[low] != count || v[high] != count)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    high--;
                    low++;
                    count++;
                }
            }

            if (flag)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}
