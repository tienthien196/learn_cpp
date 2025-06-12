#include <stdio.h>
#define MAX 200


void get_input(int &a, int &b){
    printf("nahp vao 2 so a b ");
    scanf("%d %d", &a, &b); // nhap dung dia chi

}
void nhap_matran(int matran[][MAX], int m, int n){
    printf("%d %d", m, n);

    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            printf("\nnhap vao p tu a[%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
            
        }
    }
}
void xuat_matran(int matran[][MAX], int m, int n){
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            printf("\nvalue of a[%d][%d] is: %d",i, j, matran[i][j]);

            
        }
    }
}

int main(){
    int a= 0;
    int b = 0;
    get_input(a,b);
    //
    int m[MAX][MAX];
    nhap_matran(m, a,b);
    xuat_matran(m, a, b);


    return 0;
}