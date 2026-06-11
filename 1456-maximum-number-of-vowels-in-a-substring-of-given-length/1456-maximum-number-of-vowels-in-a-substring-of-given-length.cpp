class Solution {
public:
    int maxVowels(string s, int k) {
        vector<bool> vowel = {
            // abcde
            true, false, false, false, true,
            // fghij
            false, false, false, true, false,
            // klmno
            false, false, false, false, true,
            // pqrst
            false, false, false, false, false,
            // uvwxyz
            true, false, false, false, false, false
        };

        int l = 0, r = 0, v = 0, max = 0;
        while (r < s.length()) {
            if (vowel[s[r++] - 'a']) {
                ++v;
            }
            if (v > max) {
                if (v == k) {
                    return k;
                }
                max = v;
            }
            if (r - l == k) {
                if (vowel[s[l++] - 'a']) {
                    --v;
                }
            }
        }

        return max;
    }
};
