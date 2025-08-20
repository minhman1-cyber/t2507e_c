// Online C compiler to run C program online
#include <stdio.h>

int bai1(int a){
    int tong = 0;
    while(a>0){
        tong += a%10;
        a/=10;
    }
    return tong;
}

int bai2(int a, int b){
    int ucln = 0;
    if(a>b){
        int temp = b;
        b = a;
        a = temp;
    }
    for(int i = 1; i<=a;i++){
        if(a%i == 0 && b%i==0){
            ucln = i;
        }
    }
    return ucln;
}

int bai3(int a, int b){
    int bcnn;
    if(a>b){
        int temp = b;
        b = a;
        a = temp;
    }
    for(int i = b; i<=a*b;i++){
        if(i%a == 0 && i%b==0){
            bcnn = i;
        }
    }
    return bcnn;
}

int bai4(int x, int y){
    int kq = 1;
    for(int i = 0; i<y;i++){
        kq *= x;
    }
    return kq;
}
int main() {
    int n, a, b, x, y;

    // Bài 1
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so = %d\n", bai1(n));

    // Bài 2
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    printf("UCLN = %d\n", bai2(a, b));

    // Bài 3
    printf("BCNN = %d\n", bai3(a, b));

    // Bài 4
    printf("Nhap x, y: ");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %d\n", x, y, bai4(x, y));
    return 0;
}