class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int lsum = 0, rsum = 0, n = cardPoints.size(), maxSum = 0, r = n-1;

        for(int i = 0; i < k; i++){
            lsum += cardPoints[i];
            maxSum = max(maxSum, lsum);
        }

        for(int i = k-1; i>=0;i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[r];
            r--;
            maxSum = max(maxSum, lsum + rsum);
        }

        return maxSum;
        
    }
};