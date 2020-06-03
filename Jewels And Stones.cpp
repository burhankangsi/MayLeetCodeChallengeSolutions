int numJewelsInStones(string J, string S) {
        
        int n1 = J.length();
        int n2 = S.length();
        
        int count1[256] = {0};
        int count2[256] = {0};
        
        for(int i=0; i<n1; i++)
        {
            count1[J[i]]++;
        }
        
        for(int i=0; i<n2; i++)
        {
            count2[S[i]]++;
        }
        int count = 0;
        
        for(int i=0; i<n1; i++)
        {
            if(count2[J[i]] > 0)
            {
                count = count + count2[J[i]];
            }
        }
        
        return count;
        
    }
