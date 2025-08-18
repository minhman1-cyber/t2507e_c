// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    //bai1
    int arr[5] = {1,2,3,4,5};
    int soLan;
    printf("ban mua xoay may lan: ");
    scanf("%d", &soLan);
    for(int i = 0; i<soLan;i++){
        int temp = arr[0];
        for(int j = 0; j<4;j++){
            arr[j] = arr[j+1];
        }
        arr[4] = temp;
    }
    
    for(int i = 0; i<5;i++){
        printf("%d", arr[i]);
    }
    
    printf("\n");
    //bai2
    int arr2[10] = {1,2,2,2,3,4,5,5,6,7};
    int arr2copy[10] = {0,0,0,0,0,0,0,0,0,0};
    int r = 0;
    arr2copy[r++] = arr2[0];
    for(int i = 1; i<10;i++){
        if(arr2[i] != arr2[i-1]){
            arr2copy[r++] = arr2[i];
        }
    }
    
    for(int i = 0; i<10;i++){
        printf("%d ", arr2copy[i]);
    }
    
    printf("\n");
    
    //bai3: day con lien tiep co tong lon nhat
    int arr3[10] = {1,2,2,2,3,4,5,5,6,7};
    int tongMax = 0;
    int left,right;
    for(int i = 0; i<10;i++){
        int tong = arr3[i];
        for(int j = i; j<10;j++){
            if(arr3[j + 1] == arr3[j] + 1){
                tong += arr3[j+1];
                if(tongMax < tong){
                    left = i;
                    right = j+1;
                    tongMax = tong;
                }
            }else{
                break;
            }
        }
    }
    
    printf("tong max = %d, from %d to %d", tongMax, left, right);
    
    return 0;
}