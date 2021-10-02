#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int, int> m;
  vector<int> result;

  for(int i = 0; i < nums.size(); i++) {
    int x = target - nums[i];

    if (m.find(x) != m.end()) {
        result.push_back(m[x]);
        result.push_back(i);
    }
    else{
        m[nums[i]] = i;
    }
  }

  return result;
}


int main(int argc, char const *argv[]) {
  vector<int> v{2,7,11,15};

  int target = 9;

  auto res = twoSum(v, target);

  for(int i=0; i < res.size(); i++){
    std::cout << res[i] << " ";
  }

  return 0;
}
