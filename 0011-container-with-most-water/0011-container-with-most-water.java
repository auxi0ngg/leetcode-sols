class Solution {
    public int maxArea(int[] height) {

        int max = 0, area = 0, h = 0, w = 0;

        int l = 0, r = height.length-1;

        while(r>l){

            w = r-l;
            h = Math.min(height[l],height[r]);
            area = w*h;
            max = Math.max(area,max);

            if(height[l]<height[r])
                l++;

            else
                r--;

        }
        return max;
    }
}