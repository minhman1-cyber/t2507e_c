/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //bai 1 
    // double luong;
    // printf("Moi nhap luong: ");
    // scanf("%lf", &luong);
    // luong /= 1000;
    // float luongTinhthue = luong - 11000;
    // if(luongTinhthue <= 0){
    //     printf("mien thue");
    // }else if(luongTinhthue <= 5000){
    //     printf("nop thue: %.0f", luongTinhthue * 0.05 * 1000);
    // }else if(luongTinhthue <= 10000){
    //     printf("nop thue: %.0f", (250 + (luongTinhthue - 5000) * 0.1)* 1000);
    // }else if(luongTinhthue <= 18000){
    //     printf("nop thue: %.0f", (250 + 500 + (luongTinhthue - 10000) * 0.15)* 1000);
    // }else if(luongTinhthue <= 32000){
    //     printf("nop thue: %.0f", (250 + 500 + 1200 + (luongTinhthue - 18000) * 0.20)* 1000);
    // }else if(luongTinhthue <= 52000){
    //     printf("nop thue: %.0f", (250 + 500 + 1200 + 2800 + (luongTinhthue - 32000) * 0.25)* 1000);
    // }else if(luongTinhthue <= 80000){
    //     printf("nop thue: %.0f", (250 + 500 + 1200 + 2800 + 5000 + (luongTinhthue - 52000) * 0.30)* 1000);
    // }else{
    //     printf("nop thue: %.0f", (250 + 500 + 1200 + 2800 + 5000 + 8400 + (luongTinhthue - 80000) * 0.35)* 1000);
    // }
    
    //bai2
    // int ngay, thang, nam;
    // printf("Moi nhap ngay: ");
    // scanf("%d", &ngay);
    // printf("Moi nhap thang: ");
    // scanf("%d", &thang);
    // printf("Moi nhap nam: ");
    // scanf("%d", &nam);
    
    // switch(thang){
    //     case 4: case 6: case 9: case 11:{
    //         int ngayMoi = ngay+1;
    //         if(ngayMoi > 30){
    //             ngay = 1;
    //             thang += 1;
    //         }else{
    //             ngay += 1;
    //         }
    //         break;
    //     }
            
        
    //     case 2:{
    //         int ngayMoi = ngay+1;
    //         if(nam % 4 == 0){
    //             if(ngayMoi > 29){
    //                 ngay = 1;
    //                 thang++;
    //             }else{
    //                 ngay++;
    //             }
    //         }else{
    //             if(ngayMoi > 28){
    //                 ngay = 1;
    //                 thang++;
    //             }else{
    //                 ngay++;
    //             }
    //         }
    //         break;
    //     }
            
        
    //     default:{
    //         int ngayMoi = ngay+1;
    //         if(ngayMoi > 31){
    //             ngay = 1;
    //             int thangMoi = thang + 1;
    //             if(thangMoi > 12){
    //                 thang = 1,
    //                 nam++;
    //             }else{
    //                 thang++;
    //             }
    //         }else{
    //             ngay += 1;
    //         }
    //     }
            
    // }
    
    // printf("ngay: %d, thang: %d, nam: %d", ngay, thang, nam);
    
    //bai3
    int tien;
    printf("moi ban nhap vao tien: ");
    scanf("%d", &tien);
    
    int tien500 = 0, tien200 = 0, tien100 = 0, tien50 = 0, tien20 = 0, tien10 = 0;
    while(tien >= 500){
        tien500++;
        tien -= 500;
    }
    while(tien >= 200){
        tien200++;
        tien -= 200;
    }
    while(tien >= 100){
        tien100++;
        tien -= 100;
    }
    while(tien >= 50){
        tien50++;
        tien -= 50;
    }
    while(tien >= 20){
        tien20++;
        tien -= 20;
    }
    if(tien > 0){
        tien10++;
        tien-=10;
    }
    printf("tien 500: %d, tien 200: %d, tien 100: %d, tien 50: %d, tien 20: %d, tien 10: %d", tien500, tien200, tien100, tien50, tien20, tien10);
    return 0;
}