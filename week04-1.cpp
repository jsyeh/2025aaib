// week04-1.cpp  C++ 語言版 for迴圈版
// LeetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 0;  // 很長很長的整數
        for(long long i=1; i<n*2; i+=2) {
            ans += i;
        }
        for(long long i=1; i<n*2-1; i+=2) {
            ans += i;
        }
        return ans;
    }
};
