// week04-1.cpp  C++ �y���� ���� ��
// LeetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n; // �ܪ��ܪ������

        return ans*ans  + (ans-1)*(ans-1);
    }   // �j����� - �p�����, �N�O�̫᪺��l��
};
