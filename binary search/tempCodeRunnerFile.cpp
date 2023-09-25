int searchNearlySorted(int arr[], int size, int target){
        int s=0;
        int e=size-1;
        int mid= s+(e-s)/2;
        //int ans= -1;

        while(s <= e){
            if(mid-1>=0 && arr[mid-1] == target){
                return mid-1;
            }
            if(arr[mid]== target){
                return mid;
            }
            if(mid+1< size && arr[mid+1] == target){
                return mid+1;
            }
            if(target > arr[mid]){
                //right la ja
                s= mid+2;
            }
            if(target < arr[mid] ){
                //Left la ja
                e = mid-2;
            }
            mid= s+(e-s)/2;
        }
        return -1;
    } 