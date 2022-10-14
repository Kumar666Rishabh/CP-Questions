class Solution {
public:
    int countAsterisks(string s) {
        int count=0, bar=0, len=s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='|')
            {
                bar++;
            }
            if(bar%2==0)
            {
                if(s[i]=='*')
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};
