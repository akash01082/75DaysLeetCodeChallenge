class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1,n2;
        for(int i=0;i<nums1.size();i++){
            n1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            n2.insert(nums2[i]);
        }
        vector<int> res;
        for(auto it=n1.begin();it!=n1.end();it++){
            if(n2.count(*it))
                res.push_back(*it);
        }
        return res;
    }
};