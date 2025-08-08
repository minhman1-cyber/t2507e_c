// Online C compiler to run C program online
#include <stdio.h>

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
    int n;
    printf("moi nhap vao n: ");
    scanf("%d", &n);
    
    int soMoi = 0;
    
    while(n!=0){
        int soThua = n % 10;
        soMoi = soMoi * 10 + soThua;
        n = n/10;
    }
    
    printf("so dao nguoc: %d", soMoi);

    return 0;
}