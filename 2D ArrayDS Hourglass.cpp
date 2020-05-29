//https://www.hackerrank.com/challenges/2d-array/problem

int hourglassSum(vector<vector<int>> arr) {
    int sum,result=INT_MIN;
    for(int r=0;r<=3;r++)
    {
        for(int c=0;c<=3;c++)
        {
            sum= arr[r][c]+arr[r][c+1]+arr[r][c+2]+arr[r+1][c+1]+arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
        
        result=std::max(result,sum);
        }
    }
    return result;


}
