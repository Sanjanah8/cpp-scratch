"time limit exceeded only 311/316 testcases passed because its O(n³) due to 3 loops and its bruteforce and set+sorting is way slow so fix one number and solve 2sum using two pointers"
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int size=nums.size();
        set<vector<int>>unique;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                for(int k=j+1;k<size;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        unique.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(unique.begin(),unique.end());
    }
}; 
