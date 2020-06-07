int maxSubarraySumCircular(vector<int>& A) {
        
        int chooseMiddle = kadane(A);
        int total = 0;
        for (int i = 0; i < A.size(); ++i) {
            total += A[i];
            A[i] *= -1;
        }
        
        int minSubArray = kadane(A);
        int notChooseMiddle = total;
        if (total + minSubArray != 0) {
            notChooseMiddle += minSubArray;
        } 
        if (chooseMiddle < notChooseMiddle) {
            return notChooseMiddle;
        }
        return chooseMiddle;       
        
    }
    
    int kadane(vector<int>& A)
    {
        int n = A.size();
        int curr_max = A[0];
        int max_so_far = A[0];
        
        for(int i=1; i<n; i++)
        {
            curr_max = max(A[i], curr_max + A[i]);
            max_so_far = max(max_so_far, curr_max);
            
        }
        
        return max_so_far;
    }
