vector<int> findAnagrams(string s, string p) {
        
        int n1 = s.size();
        int n2 = p.size();
        vector<int>v;
        
       if(n1 < n2)
       {
           return v;           
       }
        
        vector<int>count1(26, 0);
        vector<int>count2(26, 0);
        for(int i=0; i<n2; i++)
        {
            count1[s[i]-'a']++;
            count2[p[i]-'a']++;
        }
        
        if(count1 == count2)
        {
            v.push_back(0);
        }
        
        for(int i=n2; i<n1; i++)
        {
            count1[s[i]-'a']++;
            count1[s[i-n2]-'a']--;
            if(count1 == count2)
                v.push_back(i- n2 +1);
        }
        return v;            
        
    }
    
    bool compare(int count1[]) {
        for (int i=0; i<256; i++) {
            if (count1[i] != 0)
                return false;
        }
        return true;
    }
