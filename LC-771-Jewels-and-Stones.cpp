class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[52]={0}, count=0;
        int sSize=stones.size();
        int jSize=jewels.size();
        for(int i=0; i<jSize; i++)
        {
            // cout<< jewels[i]-<< " ";
            if(jewels[i]>='A' && jewels[i]<='Z')
                arr[jewels[i]-65]++;
            else
                // cout<< jewels[i]-70<<" "<< jewels[i];
                arr[jewels[i]-70]++;
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
                if(arr[stones[i]-70]!=0)
                    count++;
            }
        }
        
        return count;
    }
};
