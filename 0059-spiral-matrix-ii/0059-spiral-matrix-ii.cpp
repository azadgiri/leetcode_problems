class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int totalelement=n*n;
        int minr=0,minc=0;
        int maxr=n-1,maxc=n-1;
        int count=0;
        while(count<totalelement){
            for(int j=minc;j<=maxc && count<totalelement;j++){
                matrix[minr][j]=count+1;
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr && count<totalelement;i++){
                matrix[i][maxc]=count+1;
                count++;
            }
            maxc--;
            for(int j=maxc;j>=minc && count<totalelement;j--){
                matrix[maxr][j]=count+1;
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr && count<totalelement;i--){
                matrix[i][minc]=count+1;
                count++;
            }
            minc++;
        }
        return matrix;

    }
};