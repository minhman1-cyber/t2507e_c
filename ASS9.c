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

int bai5(int x){
    int kq = 0;
    while(x > 0){
        kq = kq * 10 + x%10;
        x/=10;
    }
    return kq;
}

int bai6(int x){
    int kq = 0;
    while(x > 0){
        kq += x%10;
        x/=10;
    }
    return kq;
}

int bai7(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int bai8(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void bai9(int x[], int size){
    for(int i = 0; i<size;i++){
        for(int j = 0; j<size-i-1;j++){
            if(x[j] > x[j+1]){
                int temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;
            }
        }
    }
}

void bai10(int x[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        int temp = x[start];
        x[start] = x[end];
        x[end] = temp;
        start++;
        end--;
    }
}



int main() {
    int arr[5] = {5, 2, 9, 1, 7};
    int n = 12345;

    printf("Bai 1 - Tong chu so: %d\n", bai1(n));
    printf("Bai 2 - UCLN(12, 18): %d\n", bai2(12, 18));
    printf("Bai 3 - BCNN(12, 18): %d\n", bai3(12, 18));
    printf("Bai 4 - 2^5: %d\n", bai4(2, 5));
    printf("Bai 5 - Dao so 12345: %d\n", bai5(n));
    printf("Bai 7 - Max trong mang: %d\n", bai7(arr, 5));
    printf("Bai 8 - Min trong mang: %d\n", bai8(arr, 5));

    bai9(arr, 5);
    printf("Bai 9 - Mang sau khi sap xep: ");
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    printf("\n");

    bai10(arr, 5);
    printf("Bai 10 - Mang dao nguoc: ");
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
