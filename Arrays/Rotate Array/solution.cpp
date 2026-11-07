class Solution {
public:
    void swapping(vector<int>& nums, int i,int j){
    
    int temp=0;
    while(i<j){
      swap(nums[i],nums[j]);
        i++;
        j--;
    }
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        swapping(nums,0,n-1);
        swapping(nums,0,k-1);
        swapping(nums,k,n-1);

    }
};
