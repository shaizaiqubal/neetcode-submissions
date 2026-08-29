#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        vector<pair<int, int>> freq_pairs;
        for (auto& [element, freq] : counts) {
            freq_pairs.push_back({freq, element});
        }

        sort(freq_pairs.begin(), freq_pairs.end(), greater<pair<int, int>>());

        vector<int> result;
        for (int i = 0; i < k && i < freq_pairs.size(); ++i) {
            result.push_back(freq_pairs[i].second);
        }

        return result;
    }
};
