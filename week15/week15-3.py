#week15-3.py 寫到一半的Python版,等一下還有"寫到一半的C版"
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N =len(s)
        for i in range(N): #先用Python把字串的迴圈寫出來
            print(s[i],t[i])
        
        ans = 0
        return ans