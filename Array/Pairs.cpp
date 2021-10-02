#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
	unordered_set<int> s;

	vector<int> result;

	for (auto i : arr)
	{
		int x = target - i;

		if (s.find(x) != s.end())
		{
			result.push_back(i);
			result.push_back(x);
		}
		else
		{
			s.insert(i);
		}
	}

	return result;
}

int main(int argc, char const *argv[])
{
	vector<int> arr{10, 5, 2, 3, -6, 9, 11};

	int target = 4;

	auto res = pairSum(arr, target);

	for (auto i : res)
	{
		cout << i << " ";
	}

	return 0;
}
