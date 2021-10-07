#include <bits/stdc++.h>

using namespace std;

int highest_mountain(vector<int> array)
{
    int n = array.size();
    int largest = 0;
    for (int i = 1; i <= n - 2;)
    {
        if (array[i] > array[i + 1] && array[i - 1] < array[i])
        {
            int cnt = 1;
            int j = i;

            while (j >= 1 && array[j] > array[j - 1])
            {
                j--;
                cnt++;
            }

            while (i <= n - 2 && array[i] > array[i + 1])
            {
                i++;
                cnt++;
            }
            largest = max(largest, cnt);
        }
        else
            i++;
    }

    return largest;
}

int main(int argc, char const *argv[])
{
    vector<int> array{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << highest_mountain(array);
    return 0;
}
