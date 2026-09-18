class Solution {
  public:
  bool fun(vector<int>& arr,int i, int n){
      if(i == n || i == n-1){
          return true;
      }
      if(arr[i] > arr[i+1]){
          return false;
      }
      return fun(arr,i+1,n);
  }
    bool isSorted(vector<int>& arr) {
        return fun(arr,0,arr.size());
        
    }
};