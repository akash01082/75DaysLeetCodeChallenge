class Trie {
private:
    struct Node{
        Node* children[26];
        bool isEnd;
        Node(){
            isEnd=false;
            for(int i=0;i<26;i++)
                children[i]=NULL;
        }
    };
    Node* root;

public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* curr=root;
        for(char c:word){
            int index=c-'a';
            if(curr->children[index]==NULL){
                curr->children[index]=new Node();
            }
            curr=curr->children[index];
        }
        curr->isEnd=true;
    }
    
    bool search(string word) {
        Node* curr=root;
        for(char c:word){
            int index=c-'a';
            if(curr->children[index]==NULL){
                return false;
            }
            curr=curr->children[index];
        }
        return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* curr=root;
        for(char c:prefix){
            int index=c-'a';
            if(curr->children[index]==NULL){
                return false;
            }
            curr=curr->children[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */