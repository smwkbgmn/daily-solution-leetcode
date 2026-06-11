class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel = "aeiou";

        int l = 0, r = 0, v = 0, max = 0;
        while (r < s.length()) {
            if (vowel.find(s[r++]) != string::npos) {
                ++v;
            }
            if (v > max) {
                if (v == k) {
                    return k;
                }
                max = v;
            }
            if (r - l == k) {
                if (vowel.find(s[l++]) != string::npos) {
                    --v;
                }
            }
        }

        return max;
    }
};
