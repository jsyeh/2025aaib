# week02-3.py �g LeetCode
# LeetCode 1. Two Sum
# ���@��Ʀr nums �̭��u����ӡv�ۥ[,�O target
# nums[i] + nums[j] == target  ��� i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}  # ���@�ӽc�l, �̭���u�X�{�L���Ʀr�v
        # �ڭ̷Q�n��X target �o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num  # �t�~�@�ӻݭn���� �u�i�H��X taget�v�� (target-num)
            if other in box:  # �b�c�l��,���t�~�@�ӻݭn����
                return [ box[other], i ]  # ��쵪��
            else:  # �p�G�S���X�A���Ʀr���
                box[num] = i  # �N��{�b���Ʀr num , ��� box �̭�
