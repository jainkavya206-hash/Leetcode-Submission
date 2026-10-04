class Solution {
    int PalindromicSubstrings(string &s, int i, int j) {
         int C = 0;
        for (int st= 0; st< s.length(); st++) {
           
            if (i >= 0 && j < s.length() && s[i] == s[j]) {
                C = C + 1;
                i--;
                j++;
            } else {
                continue;
            }
           
        }
        return C;
    }

    public:
        int countSubstrings(string s) {

            int TotalCount = 0;
            for (int st = 0; st < s.length(); st++) {
                // For odd palindromic strings
                int i=st;
                int j=st;
                int OddPalindromicSubstring = PalindromicSubstrings(s, i, j);
                i=st;
                j=st+1;
                int EvenPalindromicSubstring = PalindromicSubstrings(s, i,j);
                TotalCount = TotalCount + OddPalindromicSubstring +
                             EvenPalindromicSubstring;
            }
            return TotalCount;
        }
    };