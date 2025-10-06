class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //xor operation with bits
        // 10^10 will give 00
        int ans=0;
        for(int i: nums){
            ans=ans^i;
        }

        return ans;
        
    }
};