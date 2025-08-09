class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int remaining=target-nums[i];

            if(mp.find(remaining)!=mp.end()){// trying to find that if the remianing element is found in the map when comapring to all elements 
                return {mp[remaining],i};//return that element and nums[i] 
            }

            mp[nums[i]]=i;//add that element if it is not the remaining element
        }

        return {};

}
};