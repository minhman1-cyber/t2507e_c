#include <stdio.h>
#include <math.h>

int main()
{
    //bai1
    // int diem;
    // printf("Bai 1 \n");
    // printf("Moi ban nhap vao diem: ");
    // scanf("%d", &diem);
    // if(diem < 5){
    //     printf("hoc sinh yeu");
    // }else if(diem < 7){
    //     printf("hoc sinh trung binh");
    // }else if(diem < 9){
    //     printf("hoc sinh kha");
    // }else if(diem < 10){
    //     printf("hoc sinh xuat sac");
    // }
    
    //bai2
    // int a;
    // int b;
    // printf("moi ban nhap a: ");
    // scanf("%d", &a);
    // printf("moi ban nhap b: ");
    // scanf("%d", &b);
    // if(a == 0){
    //     if(b==0){
    //         printf("phuong trinh co vo so nghiem");
    //     }else{
    //         printf("phuong trinh vo nghiem");
    //     }
        
    // }else{
    //     float x = -b/(float) a;
    //     printf("x = %f", x);
    // }
    
    
    //bai3
    // int a,b,c;
    // printf("moi nhap vao canh a: ");
    // scanf("%d", &a);
    // printf("moi nhap vao canh b: ");
    // scanf("%d", &b);
    // printf("moi nhap vao canh c: ");
    // scanf("%d", &c);
    
    // if(a != 0 && b!= 0 && c != 0){
    //     if(a > 0 && b>0 && c>0){
    //         if(a+b > c && a+c>b && b+c>a){
    //             printf("day la 3 canh cua mot tam giac");
    //         }else{
    //             printf("day khong phai 3 canh cua mot tam giac");
    //         }
    //     }else{
    //         printf("luu y: canh > 0");
    //     }
    // }else{
    //     printf("luu y: canh != 0");
    // }
    
    
    
    //bai4
    // float soDien;
    // printf("moi ban nhap vao so dien: ");
    // scanf("%f", &soDien);
    
    // if(soDien <= 50){
    //     printf("tien dien: %.2f", soDien*1.678);
    // }else if(soDien <= 100){
    //     printf("tien dien: %.2f", 50 * 1.678 + (soDien - 50) * 1.734);
    // }else if(soDien <= 200){
    //     printf("tien dien: %.2f", 50 * 1.678 + 50 * 1.734 + (soDien - 100)*2.014);
    // }else{
    //     printf("tien dien: %.2f", 50 * 1.678 + 50 * 1.734 + 100 *2.014 + (soDien - 200) * 2.536);
    // }
    
    //bai5
    int a,b,c;
    printf("moi nhap vao a: ");
    scanf("%d", &a);
    printf("moi nhap vao b: ");
    scanf("%d", &b);
    printf("moi nhap vao c: ");
    scanf("%d", &c);
    
    
    
    if(a!=0){
        int delta = b*b- 4*a*c;
        if(delta < 0){
            printf("phuong trinh vo nghiem");
        }else if(delta == 0){
            float x = -b / (2.0 * a);
            printf("phuong trinh co 1 nghiem x1 = x2 = %f", x);
        }else{
            float x1 = (-b + sqrt(delta)) / (2.0 * a);
            float x2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("x1: %f", x1);
            printf("x2: %f", x2);
        }
    }else{
        if(b == 0){
            if(c==0){
                printf("phuong trinh co vo so nghiem");
            }else{
                printf("phuong trinh vo nghiem");
            }
            
        }else{
            float x = -c/(float) b;
            printf("x = %.2f", x);
        }
    }
    
    
    
    return 0;
}
