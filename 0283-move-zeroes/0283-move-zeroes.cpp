class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i;
        int n = nums.size();
        int j= -1;
        //find first zero and put j there 
        for(i=0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1) return;
        //put the i after j and swap i &j when found zero
        for(i=j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++ ;
            }
        }
    }
};