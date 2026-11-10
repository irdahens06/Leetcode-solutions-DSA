class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int m=arr.size(), n =arr[0].size();
        int min_r=0,max_r=m-1;
        int min_c=0,max_c=n-1;

        while(min_r<=max_r && min_c<=max_c){
            for(int j=min_c ;j<=max_c;j++){
                ans.push_back(arr[min_r][j]);
            }
            min_r++;

            if(min_r>max_r || min_c>max_c)break;
             for(int i=min_r ;i<=max_r;i++){
                ans.push_back(arr[i][max_c]);
            }
            max_c--;

             if(min_r>max_r || min_c>max_c)break;
             for(int j=max_c ;j>=min_c;j--){
                ans.push_back(arr[max_r][j]);
            }
            max_r--;

             if(min_r>max_r || min_c>max_c)break;
             for(int i=max_r ;i>=min_r;i--){
                ans.push_back(arr[i][min_c]);
            }

            min_c++;
        }
            return ans;

            }
};
