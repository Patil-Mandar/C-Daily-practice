class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0.00000;
        int n = points.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    vector<int> p1 = points[i];
                    vector<int> p2 = points[j];
                    vector<int> p3 = points[k];
                    maxArea = max(
                        maxArea,
                        0.5 * abs(p1[0]*(p2[1]-p3[1]) + p2[0]*(p3[1]-p1[1]) + p3[0]*(p1[1]-p2[1]))
                    );
                }
            }
        }

        return maxArea;
    }
};