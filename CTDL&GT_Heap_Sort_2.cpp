int main() {
    int n;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap day so: ");
// Nhập dãy số từ bàn phím
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
// Sắp xếp dãy số bằng cách sử dụng heap sort
    heapSort(arr, n);
    printf("Day so da sap xep: ");
// In dãy số đã được sắp xếp từ lớn đến nhỏ
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
