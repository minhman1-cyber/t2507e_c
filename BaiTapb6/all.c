// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //bai1
    // int n, i = 1, tong = 0;
    // printf("Nhap n: ");
    // scanf("%d", &n);

    // while (i <= n) {
    //     if (n % i == 0) {
    //         printf("%d ", i);
    //         tong += i;
    //     }
    //     i++;
    // }

    // printf("\nTong cac uoc = %d", tong);
    
    //bai2
    // int a, b, i, UCLN, BCNN;
    // printf("Nhap a, b: ");
    // scanf("%d%d", &a, &b);
    
    // i = (a < b) ? a : b;
    // while (i >= 1) {
    //     if (a % i == 0 && b % i == 0) {
    //         UCLN = i;
    //         break;
    //     }
    //     i--;
    // }

    // i = (a > b) ? a : b;
    // while (1) {
    //     if (i % a == 0 && i % b == 0) {
    //         BCNN = i;
    //         break;
    //     }
    //     i++;
    // }

    // printf("UCLN = %d\n", UCLN);
    // printf("BCNN = %d\n", BCNN);

    //bai3
    // int n, tong = 0;
    // printf("Nhap n: ");
    // scanf("%d", &n);

    // while (n != 0) {
    //     tong += n % 10;
    //     n /= 10;
    // }

    // printf("Tong cac chu so = %d", tong);
    
    //bai4
    // int n;
    // printf("Nhap n: ");
    // scanf("%d", &n);

    // while (n >= 10) {
    //     n /= 10;
    // }

    // printf("Chu so dau tien = %d", n);
    
    //bai5
    // int n, max = 0, digit;
    // printf("Nhap n: ");
    // scanf("%d", &n);

    // while (n != 0) {
    //     digit = n % 10;
    //     if (digit > max) {
    //         max = digit;
    //     }
    //     n /= 10;
    // }

    // printf("Chu so lon nhat = %d", max);
    
    //bai6
    // int n, digit, check = 1;
    // printf("Nhap n: ");
    // scanf("%d", &n);

    // while (n != 0) {
    //     digit = n % 10;
    //     if (digit % 2 == 0) {
    //         check = 0;
    //         break;
    //     }
    //     n /= 10;
    // }

    // if (check == 1)
    //     printf("Tat ca chu so la so le");
    // else
    //     printf("Co chu so chan");
    
    //bai7
    // int a, b;
    // int i, j, dem;

    // // Nhập a, b và kiểm tra điều kiện a < b
    // do {
    //     printf("Nhap a, b (a < b): ");
    //     scanf("%d%d", &a, &b);
    // } while (a >= b);

    // i = a; // bắt đầu từ a
    // while (i <= b) {
    //     dem = 0; // đặt lại dem = 0 cho mỗi i

    //     if (i >= 2) {
    //         j = 2;
    //         while (j < i) {
    //             if (i % j == 0) {
    //                 dem++;
    //             }
    //             j++;
    //         }
    //         if (dem == 0) {
    //             printf("%d ", i); // i là số nguyên tố
    //         }
    //     }
    //     i++;
    // }

    return 0;
}