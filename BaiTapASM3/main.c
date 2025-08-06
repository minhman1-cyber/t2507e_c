/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //bai1
    // int thuTungay = 0;
    // int ngayTrongthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    // int ngay, thang, nam;
    // printf("moi nhap ngay: ");
    // scanf("%d", &ngay);
    
    // printf("moi nhap thang: ");
    // scanf("%d", &thang);
    
    // printf("moi nhap nam: ");
    // scanf("%d", &nam);
    
    // if(nam % 4 == 0){
    //     ngayTrongthang[1] = 29;
    // }
    // int i = 0;
    // for(i; i<thang - 1;i++){
    //     thuTungay += ngayTrongthang[i];
    // }
    
    // thuTungay += ngay;
    // printf("ngay theo thu tu: %d", thuTungay);

    //bai2
    // int a, b;
    // printf("moi nhap vao a: ");
    // scanf("%d", &a);
    // printf("moi nhap vao b: ");
    // scanf("%d", &b);
    
    // int a1 = abs(a-10);
    // int b1 = abs(b-10);
    // if(a1 == b1){
    //     printf("bang nhau");
    // }else{
    //     if(a1 < b1){
    //         printf("a gan 10 hon");
    //     }else{
    //         printf("b gan 10 hon");
    //     }
    // }
    
    //bai3
    // int so;
    // printf("moi nhap vao so: ");
    // scanf("%d", &so);
    // char *mang[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    // printf("%s", mang[so]);
    
    //bai4
    int tienMuahang;
    printf("moi nhap vao tien mua hang: ");
    scanf("%d", &tienMuahang);
    
    if(tienMuahang >= 500000){
        int tienPhaitra = tienMuahang - (tienMuahang * 0.1);
        printf("tien phai tra: %d", tienPhaitra);
    }else if(tienMuahang >=200000){
        int tienPhaitra = tienMuahang - (tienMuahang * 0.05);
        printf("tien phai tra: %d", tienPhaitra);
    }else{
        printf("ko duoc giam gia");
    }
    
    return 0;
}