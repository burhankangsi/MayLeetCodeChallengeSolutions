bool checkInclusion(string s1, string s2) {
                
         int a[26]={0},b[26]={0};
        int n=s1.size(),m=s2.size();
        if(n> m) 
            return false;
        for(int i=0;i<n;i++)
        {
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        if(find(a,b))
            return true;
        for(int i=0;i<m-n;i++)
        {
            b[s2[i]-'a']--;
            b[s2[i+n]-'a']++;
            if(find(a,b)) 
                return true;
        }
        if(find(a,b)) return true;
        return false;
        
    }
    
    bool find(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i] != b[i]) return false;
        }
        return true;
    }
