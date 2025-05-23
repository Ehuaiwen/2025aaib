///LeetCode 3375 .Minimum Operations to Make Array Values Equal to K
///要切幾刀才能把數字全變成k
///數字只有1-100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101]={};///陣列宣告
        int N = nums.size();
        for (int i =0;i<N;i++){
            int now =nums[i];
            if(now < k)return -1;///有小的數?那就失敗
            a[now]++;///現在的數字 +1
        }
        int ans =0;
        for(int now =k+1;now<=100;now++){
            if(a[now]>0)ans++;
        }
        return ans;
    }
};
