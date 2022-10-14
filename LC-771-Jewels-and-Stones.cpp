class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[52]={0}, count=0;
        int sSize=stones.size(), jSize=jewels.size();
        for(int i=0; i<jSize; i++)
        {
            if(jewels[i]>='A' && jewels[i]<='Z')
                arr[jewels[i]-65]++;
            else
                arr[jewels[i]-71]++;
        }
        for(int i=0; i<sSize; i++)
        {
            if(stones[i]>='A' && stones[i]<='Z')
            {
                if(arr[stones[i]-65]!=0)
                    count++;
            }
            else
            {
                if(arr[stones[i]-71]!=0)
                    count++;
            }
        }
        
        return count;
    }
};
