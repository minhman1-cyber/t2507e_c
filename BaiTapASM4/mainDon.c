// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    //bai1
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    
    // int i = 1;
    
    // while(i<=n){
    //     if(i%2 == 1){
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
    
    //bai2
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    
    // int i = n-1;
    // for(i;i>0;i--){
    //     if(i%2==0 && i%3==0){
    //         printf("kq: %d", i);
    //         i=1;
    //     }
    // }
    
    //bai3
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    
    // int i = 1;
    // int tong = 0;
    
    // while(i<n){
    //     if(n%i == 0){
    //         tong += i;
    //     }
    //     i++;
    // }
    // if(n == tong){
    //     printf("%d la so hoan hao", n);
    // }else{
    //     printf("%d ko la so hoan hao", n);
    // }
    
    //bai4
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    
    // int soMoi = 0;
    
    // while(n!=0){
    //     int soThua = n % 10;
    //     soMoi = soMoi * 10 + soThua;
    //     n = n/10;
    // }
    
    // printf("so dao nguoc: %d", soMoi);
    
    //bai5
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    
    // int i = 2;
    // int dem = 0;
    // for(i;i<=sqrt(n);i++){
    //     if(n%i == 0){
    //         dem++;
    //     }
    // }
    // if(dem > 0){
    //     printf("ko phai so nguyen to");
    // }else{
    //     printf("so nguyen to");
    // }
    
    //bai6
    // int n;
    // printf("moi nhap vao n: ");
    // scanf("%d", &n);
    // if(n == 1){
    //     printf("kq = 1");
    // }else if(n==0){
    //     printf("kq = 0");
    // }else{
    //     int a = 0;
    //     int b = 1;
    //     int fib = 0;
    //     int i = 2;
    //     for(i;i<=n;i++){
    //         fib = a + b;
    //         a = b;
    //         b = fib;
    //     }
    //     printf("kq = %d", fib);
    // }
    
    //bai7
    int n;
    printf("moi nhap vao n: ");
    scanf("%d", &n);
    
    int fib = 0;
    int a = 0;
    int b = 1;
    
    while(fib < n){
        fib = a + b;
        a = b;
        b = fib;
    }
    
    printf("kq = %d", a);
    return 0;
}