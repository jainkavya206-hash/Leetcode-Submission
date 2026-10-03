class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[250] = {0};
        // for string 1
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            arr[ch]++;
        }
        //for string 2
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];
            arr[ch]--;
        }

        for (int i = 0; i < 250; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        return true;
    }
};