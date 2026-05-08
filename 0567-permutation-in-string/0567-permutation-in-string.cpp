class Solution {
public:
    bool checkInclusion(string s1, string s2) {
                int n1 = s1.size();
        int n2 = s2.size();

        // If s1 is bigger, impossible
        if(n1 > n2) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Store frequency of s1
        for(char c : s1) {
            freq1[c - 'a']++;
        }

        int left = 0;

        for(int right = 0; right < n2; right++) {

            // Add current character to window
            freq2[s2[right] - 'a']++;

            // Keep window size equal to n1
            if(right - left + 1 > n1) {
                freq2[s2[left] - 'a']--;
                left++;
            }

            // Compare both frequency arrays
            if(freq1 == freq2) {
                return true;
            }
        }

        return false;

    }
};