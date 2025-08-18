#include <stdio.h>
#include <stdlib.h> // abs()

int main() {
    int n, x;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Bài 1: tìm giá trị xa x nhất
    printf("\nNhap gia tri x: ");
    scanf("%d", &x);
    int maxDiff = abs(arr[0] - x), farVal = arr[0];
    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - x);
        if (diff > maxDiff) {
            maxDiff = diff;
            farVal = arr[i];
        }
    }
    printf("1. Gia tri xa %d nhat la: %d\n", x, farVal);

    // Bài 2: tìm giá trị gần x nhất
    int minDiff = abs(arr[0] - x), nearVal = arr[0];
    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - x);
        if (diff < minDiff) {
            minDiff = diff;
            nearVal = arr[i];
        }
    }
    printf("2. Gia tri gan %d nhat la: %d\n", x, nearVal);

    // Bài 3: tìm đoạn [a, b] chứa tất cả giá trị
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    printf("3. Doan chua tat ca gia tri: [%d, %d]\n", minVal, maxVal);

    // Bài 4: tìm x để [-x, x] chứa tất cả giá trị
    int maxAbs = abs(arr[0]);
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > maxAbs) maxAbs = abs(arr[i]);
    }
    printf("4. Gia tri x de doan [-x, x] chua tat ca gia tri: %d\n", maxAbs);

    return 0;
}
