#week04-1.py �G�X�@python for�j�骩��(���@�U²�檩��)
#LeetCoode 2579.Count Total Number of Colored Cells
class Solution(object):
    def coloredCells(self,n: int)->int:
        ans=0 #�j��e���Aans���M��
        for i in range(1,n*2,2):
            ans+=i
        for i in range (1,n*2-1,2):
            ans+=i
        return ans
