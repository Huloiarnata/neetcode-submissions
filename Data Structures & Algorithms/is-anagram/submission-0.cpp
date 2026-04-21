class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> smap,tmap;
        int size = t.size();

        if ( s.size() != size )
            return false;

        for ( int i = 0; i < size; i++ ) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        if( smap == tmap )
            return true;
        
        return false;
        
    }
};
