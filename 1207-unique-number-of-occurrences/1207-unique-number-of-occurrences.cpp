class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occur;
        for (auto& n: arr) {
            if (occur.insert({n, 1}).second == false) {
                ++occur[n];
            }
        }

        unordered_set<int> unq;
        for (auto& [_, cnt]: occur) {
            if (unq.insert(cnt).second == false) {
                return false;
            }
        }

        return true;
    }
};