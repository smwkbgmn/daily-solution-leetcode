class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        if (asteroids.size() < 2) {
            return vector<int>(asteroids);
        }
        
        vector<int> pool;
        for (auto& n: asteroids) {
            if (n < 0) {
                while (pool.size() > 0 && n != 0 && pool.back() > 0) {
                    if (pool.back() + n > 0) {
                        n = 0;
                    } else if (pool.back() + n == 0) {
                        pool.pop_back();
                        n = 0;
                    } else {
                        pool.pop_back();
                    }
                }
            }

            if (n != 0) {
                pool.push_back(n);
            }
        }
        
        return pool;
    }
};