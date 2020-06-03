int findComplement(int num) {
        

        int count = 0;
        int temp = num;
        
        while(temp > 0)
        {
            count++;
            temp >>= 1;
        }
        
        return num ^ int(pow(2, count) - 1);
        
    }
