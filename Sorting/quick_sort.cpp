   
    //  void quickSort(int arr[], int low, int high)
    // {
    //     if(low>=high)
    //      {return;}
       
    //     int count;
    //     count=partition(arr,low,high);
    //     quickSort(arr,low,count-1);
    //     quickSort(arr,count+1,high);
    // }
    
 
    // int partition (int arr[], int low, int high)
    // {
    //    int temp=arr[low];
    //    int n=sizeof(arr);
    //    int count=0;
      
    //     for(int i=low+1 ; i<=n ; i++){
    //        if(arr[i] <= temp){
    //            count++;
    //        }
    //    }
       
    //    int tempIndex=low+count;
    //    swap(arr[tempIndex],arr[low]);
       
    //    int i=low;
    //    int j =high;
    //    while(i<tempIndex && j>tempIndex){
    //        while(arr[i]<temp){
    //            i++;
    //        }
    //        while(arr[j]>temp){
    //            j--;
    //        }
    //        if(i<tempIndex && j>tempIndex){
    //            swap(arr[i++],arr[j--]);
    //        }
    //    }
    //    return tempIndex;
    // }