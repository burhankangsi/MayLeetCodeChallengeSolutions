 int findJudge(int N, vector<vector<int>>& trust) {
                
       unordered_map<int, int>mp1;
        unordered_map<int, int>mp2;
        int n = trust.size();
        
        for(int i=0; i<n; i++)
        {
            mp1[trust[i][0]] = 1;
            mp2[trust[i][1]]++;
        }
        
        for(int i=1; i<=N; i++)
        {
            if(mp1[i] == 0 && mp2[i] == N-1)
            {
                return i;
            }
        }
        
        return -1;
    }
