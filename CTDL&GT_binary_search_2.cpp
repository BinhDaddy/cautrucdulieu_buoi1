ví dụ về tìm số 23 trong các số
#include<stdio.h>
int binarysearch(int a[], int n, int x)
{
    int left = 0; 
    int right = n - 1;
    int midle;
    do
    {
        midle = (left + right)/2;
        if(x = a[midle])
        
            return midle;
        
        else 
        if (x > a[midle])
        
         left = midle + 1;
        
        else
            right = midle - 1;

    } while (left <= right);
    return -1; 
}
 int main ()

{
int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
int n = sizeof(a) / sizeof(a[0]);
int x = 23;
int result = binarysearch(a, n, x);
    printf("%d xuat hien tai chi so %d", x, result);
if (result != -1) {
    printf("%d xuat hien tai chi so %d", x, result);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}
