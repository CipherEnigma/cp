class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        
      unordered_map<int,int>freq;
      for(auto it: nums){
        freq[it]++;
      }

      for(auto v: freq){
         if(v.second==n){
            return v.first;
         }

      }
      return -1;
    }
      

    
};