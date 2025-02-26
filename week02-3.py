#week 02-3.py 寫Leetcode
#Leetcode 1.Two Sum
#有一個數字 nums 裡面[哪兩個]相加事target
# nums[i]+nums[j]==target 找到i和j使得鄉家事target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子，裡面放出現過的數字
        #目標湊出TARGET這個加總

        for i,num in enumerate(nums):
            other = target - num #另外一個需要的數
            if other in box:#在箱子裡找另外一個需要的數
                return [box[other],i]#找答案
            else:#if 沒有合適的數字
                box[num]=i#把現在的數字放入box
