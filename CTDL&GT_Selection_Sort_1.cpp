cài đặt của phương pháo chọn trực tiép(selection Sort):
void selectionSort(int arr[], int n) {
   int i, j, min_idx;
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[min_idx])
            min_idx = j;
      swap(arr[min_idx], arr[i]);
   }
}
cre: nhóm 4
   
