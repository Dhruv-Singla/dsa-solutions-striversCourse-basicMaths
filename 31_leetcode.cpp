class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return;
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};
// Intuition
// we dont want every permuataion, we want only just after permutation.

// Approach
// we start from last element and move towards first. We see if any of them is smaller then the previous one. We swap the number with just greater than it in right elements. now we rotate the array to its right.

// Complexity
// Time complexity: O(n)
// Space complexity: O(1)
