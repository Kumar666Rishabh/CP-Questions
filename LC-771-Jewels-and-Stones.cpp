class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int sSize=stones.size();
        int jSize=jewels.size();
        for(int i=0; i<sSize; i++)
        {
            for(int j=0; j<jSize; j++)
            {
                if(stones[i]==jewels[j])
                    count++;
            }
        }
        
        return count;
    }
};
