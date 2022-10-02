//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
class Solution {
public:
    uint64_t numPairsDivisibleBy60(vector<int>& time) {
        
        vector<uint64_t> vec(60);
        for(uint64_t i=0; i<time.size(); i++)
            vec[time[i]%60]++;
        
        uint64_t cnt=0;
        cnt+= (vec[0]*(vec[0]-1))/2;
        cnt+= (vec[30]*(vec[30]-1))/2;
        for(uint64_t i=1; i<=29; i++)
            cnt+= (vec[i]*vec[60-i]);
        
        return cnt;
    }
};