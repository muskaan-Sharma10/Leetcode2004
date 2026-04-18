# Code
```cpp []
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int bestSize = 0;

        unordered_map<char, int> map;

        while (right < s.length()) {
            char newChar = s[right];

            if (map.count(newChar)) {
                int lastseenIdx = map[newChar];
                if (lastseenIdx >= left) {
                    left = lastseenIdx + 1;
                }
            }

            map[newChar] = right;

            int currSubsLength = right - left + 1;
            if (bestSize < currSubsLength)
                bestSize = currSubsLength;

            right++;
        }

        return bestSize;
    }
};
