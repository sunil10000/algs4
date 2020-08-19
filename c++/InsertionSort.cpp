
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){ // a[0:i-1] sorted
        int value = arr[i];

        //find index j in 0:i-1, where arr[i] belongs
        int j=i;
        while(j>0 && arr[j-1] > value){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;
    }
}