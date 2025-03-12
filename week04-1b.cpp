// week04-1.cpp  C++ 語言版 公式 版
// LeetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n; // 很長很長的整數

        return ans*ans  + (ans-1)*(ans-1);
    }   // 大正方形 - 小正方形, 就是最後的格子數
};
