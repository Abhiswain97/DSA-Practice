#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> triplet_twoPointer(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> result;

    for (size_t i = 0; i <= nums.size() - 3; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k)
        {
            int curr_sum = nums[i];
            curr_sum += nums[j];
            curr_sum += nums[k];

            if (curr_sum == target)
            {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (curr_sum < target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};

    int target = 18;

    auto res = triplet_twoPointer(arr, target);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << ", ";
        }
        cout << "\n";
    }

    return 0;
}
