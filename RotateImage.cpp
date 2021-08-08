class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
        void reverseRow(vector<vector<int>>& matrix) {
            for(int row=0;row<matrix.size();row++){
                int left=0;
                int right=matrix.size()-1;
                while(left<right){
                    int temp=matrix[row][left];
                    matrix[row][left]=matrix[row][right];
                    matrix[row][right]=temp;
                    left++;
                    right--;
                }
            }
        }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverseRow(matrix);
    }
};