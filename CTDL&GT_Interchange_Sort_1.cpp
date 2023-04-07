#include <stdio.h>

void sapXepDoiChoTrucTiep(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // HoÃ¡n Ä‘á»•i giÃ¡ trá»‹ cá»§a hai pháº§n tá»­ náº¿u khÃ´ng Ä‘Ãºng thá»© tá»±
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    sapXepDoiChoTrucTiep(arr, n); // Gá»i hÃ m sáº¯p xáº¿p Ä‘á»•i chá»— trá»±c tiáº¿p

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
