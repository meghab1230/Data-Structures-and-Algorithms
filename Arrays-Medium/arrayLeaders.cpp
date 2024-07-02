//   vector<int> leaders(int n, int arr[]) {
//             if(n==1){
//             return {arr[0]};
//         }
//         if(n==2){
//             if(arr[0]>arr[1]){
//                 return {arr[0],arr[1]};
//             }
//             else{
//                 return {arr[1]};
//             }
//         }
//         stack<int>st;
//         st.push(arr[n-1]);
//         int j=n-2;
//         int maxi=arr[n-1];
//         while(j>=0){
//             if(arr[j]>=maxi){
//                 st.push(arr[j]);
//                 maxi=arr[j];
//             }
//             j--;
//         }
//         vector<int>ans;
//         while(!st.empty()){
//             int s=st.top();
//             st.pop();
//             ans.push_back(s);
//         }
//         return ans;
//     }