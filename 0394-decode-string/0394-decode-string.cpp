class Solution {
public:
    string decodeString(string s) {
                stack<pair<string, int>> st;

        string curr = "";
        int num = 0;

        for(char ch : s) {

            // Build number
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            // Opening bracket
            else if(ch == '[') {
                st.push({curr, num});

                curr = "";
                num = 0;
            }

            // Closing bracket
            else if(ch == ']') {

                auto top = st.top();
                st.pop();

                string prev = top.first;
                int repeat = top.second;

                string temp = "";

                for(int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }

            // Normal character
            else {
                curr += ch;
            }
        }

        return curr;
    }
};