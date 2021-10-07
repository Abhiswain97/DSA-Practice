# Problem Approaches

- Pairs
  - Brute force: O(N^2)

  - Sorting and searching:
    Sort the array and then do binary search for target - element.
    Complexity: O(N * Log N)

  - Using unordered set:
    Time complexity: O(N)
    Space complexity: O(N)

  - Two pointer approach:
    Time complexity: O(N * Log N) (Due to sorting needed)
    Space complexity: O(1)

- [Two Sum](https://leetcode.com/problems/two-sum/)
  - Using unordered map:
    Time complexity: O(N)
    Space complexity: O(N)

- Highest Peak
  - Loop through the array from 1 to n-2
    For each element in the array, check for the peak `a[i] > a[i-1] and a[i] > a[i+1]`
    Now when you find a peak, go down the left til 1 and go down right until n - 2
    Keep a counter (cnt) which keeps on increasing.
    We keep track of peaks using `largest = max(largest, cnt)` 
