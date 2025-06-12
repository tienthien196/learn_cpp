#include <stdio.h>
#define MAX 200


void get_input(int &a, int &b){
    printf("nahp vao 2 so a b ");
    scanf("%d %d", &a, &a);

}
void nhap_matran(int matran[MAX][MAX], int m, int n){

    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            printf("\nnhap vao p tu a[%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
            
        }
    }
}


int main(){
    int a,b;
    get_input(a,b);
    //
    int m[MAX][MAX];
    nhap_matran(m, a,b);


    return 0;
}