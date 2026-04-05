
class Solution {
public:
    void solve(int index, vector<int>& nums, int target, 
               vector<int>& temp, vector<vector<int>>& result) {
        
        // base case
        if(target == 0) {
            result.push_back(temp);
            return;
        }

        if(index == nums.size() || target < 0) return;

        // ✅ take current element
        temp.push_back(nums[index]);
        solve(index, nums, target - nums[index], temp, result); // reuse same element
        temp.pop_back();

        // ❌ skip current element
        solve(index + 1, nums, target, temp, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;

        solve(0, candidates, target, temp, result);
        return result;
    }
};
