bool canConstruct(string ransomNote, string magazine) {
        
        

        int count1[26] = {0};
        int count2[26] = {0};
        
        int n1 = ransomNote.length();
        int n2 = magazine.length();
        
        for(int i=0; i<n1; i++)
        {
            count1[ransomNote[i]-'a']++;
        }
        
        for(int i=0; i<n2; i++)
        {
            count2[magazine[i]-'a']++;
        }
        
        for(int i=0; i<26; i++)
        {
            if(count1[i] > count2[i])
            {
                return false;
            }
            
        }
    return true;
    }
