class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                for(int k=j+1;k<size;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        result.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        return result;
    }
};
