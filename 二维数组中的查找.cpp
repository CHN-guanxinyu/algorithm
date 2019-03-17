struct Result{
    int index;
    bool found;
}result;

class Solution {
public:
    void binarySearch(int t, vector<int> a, int l, int r){
        if(l == r){
            result.index = l;
            result.found = a[l] == t;
        }else{
            int m = (l + r) >> 1;
            if(a[m] == t){
                result.index = m;
                result.found = true;
            }else if(t < a[m]) binarySearch(t, a, l, m);
            else binarySearch(t, a, m + 1, r);
        }
    }
    bool Find(int t, vector<vector<int> > a, int south, int west){
        if(south == a.size()) return false;
        
        binarySearch(t, a[south], 0, west);
        
        if(result.found) return true;
        return Find(t, a, south + 1, result.index);
    }
    bool Find(int target, vector<vector<int> > array) {
        if(array[0].size() == 0) return false;
        return Find(target, array, 0, array[0].size() - 1);
    }
};
