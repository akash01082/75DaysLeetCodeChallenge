class TrieNode {
public:
    TrieNode* child[26];
    string word;

    TrieNode() {
        word = "";
        for (int i = 0; i < 26; i++) {
            child[i] = NULL;
        }
    }
};

class Solution {
public:
    vector<string> ans;

    void insertWord(TrieNode* root, string& word) {
        TrieNode* node = root;

        for (char c : word) {
            int idx = c - 'a';

            if (node->child[idx] == NULL) {
                node->child[idx] = new TrieNode();
            }

            node = node->child[idx];
        }

        node->word = word;
    }

    void dfs(vector<vector<char>>& board, int i, int j,
             TrieNode* node) {

        char c = board[i][j];

        if (c == '#' || node->child[c - 'a'] == NULL)
            return;

        node = node->child[c - 'a'];

        if (node->word != "") {
            ans.push_back(node->word);
            node->word = ""; // avoid duplicates
        }

        board[i][j] = '#';

        int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        for (auto &d : dir) {
            int ni = i + d[0];
            int nj = j + d[1];

            if (ni >= 0 && nj >= 0 &&
                ni < board.size() &&
                nj < board[0].size()) {

                dfs(board, ni, nj, node);
            }
        }

        board[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        TrieNode* root = new TrieNode();

        for (string &word : words) {
            insertWord(root, word);
        }

        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dfs(board, i, j, root);
            }
        }

        return ans;
    }
};