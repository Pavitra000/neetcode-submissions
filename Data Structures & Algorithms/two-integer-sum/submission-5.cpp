class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans(2,0);
        unordered_map<int,int> map;
        for(int i=0; i<nums.size(); i++){
            if(map.find((target-nums[i]))!=map.end()){
                ans[0] = map[target-nums[i]];
                ans[1] = i;
                return ans;
            }
            else{map[nums[i]]=i; }
        }
    }
};