#include <stdio.h>
#define MAX 200
#include <string.h>



void get_size(int &s){
    printf("nhap vap kich thuoc cua string");
    scanf("%d", &s);
}

void get_input(char m[MAX]){
    printf("nhap vao chuoi ki ttu ");
    fgets(m, MAX, stdin);
    puts(m);
}

int main(){
    char chuoi_kt[MAX];
    get_input(chuoi_kt);
    char str[MAX];
    char v1[] = "hello";
    char v2[] = {'t', 'h', 'i', 'e', 'n', '\0'}; // thieu ki tu \0
    //
    // truy cap mang 
    char str_base[MAX] = "show case";
    str_base[7] = 't';
    char *s_p = &str_base[0];
    printf("\n str_base %c", *(s_p+strlen(str_base)-1));
    

    printf("\n%s", str_base);
    printf("\n---done---\n");

    //
    
    printf("%s", v1);
    printf("\n%s", v2);
    //
    printf("\n%d", (int)strlen(v1));
    //
    char s_cpy[MAX];
    // strncpy(s_cpy, v1, 2);
    // strcpy(s_cpy, v1);
    //
    char cate[MAX] = "test";
    strcat(cate, v2);
    strncat(cate, v1, 2);
    printf("\n%s", cate);
    //
    char cmp[MAX] = "tienthien";
    int res = strcmp(cmp, s_cpy);
    printf("\n%d", res);
    //
    char f_str[MAX] = "thien";
    char x = 'm';
    printf("\n %s", strchr(f_str, x));
    if (strchr(f_str, x))  printf("oke");
    else printf("has eror");
    //
    char s_base[] = "hello tien thien";
    printf("\n %s", strstr(s_base, "vo"));


    

    return 0;
}