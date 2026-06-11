class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0, r = 0, v = 0, max = 0;
        while (r < s.length()) {
            if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u') {
                ++v;
            }
            ++r;

            if (v > max) {
                if (v == k) {
                    return k;
                }
                max = v;
            }
            if (r - l == k) {
                if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') {
                    --v;
                }
                ++l;
            }
        }

        return max;
    }
};
