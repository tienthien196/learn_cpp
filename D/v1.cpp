#include <stdio.h>
#define MAX 200

void get_size(int &a){
    printf("Nhap vao kich thuoc mang");
    scanf("%d", &a);


}

void nhap_arr(int a[MAX], int s){
    for(int i = 0; i<s; i++){
        printf("nhap vao p tu arr[%d]", i);
        scanf("%d", &a[i]);
    }
}

void xuat_arr(int a[MAX], int s){
    for(int i=0; i<s; i++){
        printf("\nvalue of arr[%d] is %d", i, a[i]);
    }
}

int main(){
    int size = 0; get_size(size);
    //
    int arr[MAX];
    nhap_arr(arr, size);
    xuat_arr(arr, size);
    //
    return 0;
}