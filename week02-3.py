#week 02-3.py �gLeetcode
#Leetcode 1.Two Sum
#���@�ӼƦr nums �̭�[�����]�ۥ[��target
# nums[i]+nums[j]==target ���i�Mj�ϱo�m�a��target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l�A�̭���X�{�L���Ʀr
        #�ؼд�XTARGET�o�ӥ[�`

        for i,num in enumerate(nums):
            other = target - num #�t�~�@�ӻݭn����
            if other in box:#�b�c�l�̧�t�~�@�ӻݭn����
                return [box[other],i]#�䵪��
            else:#if �S���X�A���Ʀr
                box[num]=i#��{�b���Ʀr��Jbox
