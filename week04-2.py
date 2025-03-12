#week04-2.py 是今天LeetCode挑戰題
#LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
#找出(有幾個正數)(有幾個負數)大的那個數量回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0 #迴圈前面準備好都放0
        for i in range (len(nums)):#迴圈裡更新它
            if nums[i]>0:pos+=1
            if nums[i]<0:neg+=1
        #迴圈後面拿來用
        return max(pos,neg)
