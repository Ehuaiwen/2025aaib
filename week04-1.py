#week04-1.py 二合一python for迴圈版本(等一下簡單版本)
#LeetCoode 2579.Count Total Number of Colored Cells
class Solution(object):
    def coloredCells(self,n: int)->int:
        ans=0 #迴圈前面，ans先清空
        for i in range(1,n*2,2):
            ans+=i
        for i in range (1,n*2-1,2):
            ans+=i
        return ans
