// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;

//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> vec;
        for(int i = 0; i<pairs.size();i++){
            Pair p(pairs[i].key, pairs[i].value);
            for(int j=i-1; j >-1;j--){
                if(pairs[j].key > p.key){
                    pairs[j+1] = pairs[j];
                    pairs[j] = p;
                }
            } 
            vec.push_back(pairs);
        }
        return vec;
    }
};
