// 	int print2largest(int arr[], int n) {
// 	   int max=arr[0];
	   
// 	   for(int i =0;i<n;i++){
// 	       if(arr[i]>max){
// 	           max=arr[i];
// 	       }
// 	   }
// 	unordered_set<int> set;

//     for(int i = 0; i < n; i++)
//     {
//         set.insert(arr[i]);
//     }
//     if(set.size() == 1)
//     {
//         return -1;
//     }
    
// 	int second=0;
// 	for(int i =0;i<n;i++){
// 	    if(arr[i]!=max){
// 	        if(arr[i]>second)
// 	        second=arr[i];
// 	    }
// 	}
// 	   return second;
// }