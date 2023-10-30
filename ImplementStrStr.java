Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

class Solution {
    public int strStr(String haystack, String needle) {
        
        int m = haystack.length();
        int n = needle.length();
        
        for(int i=0; i<m-n+1; i++){
            String s = haystack.substring(i, i+n);
            if(s.equals(needle))
                return i;
        }
        
        return -1;
    }
}
