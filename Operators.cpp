#include<stdio.h>

int main(){
    printf("Ini tambah : %d\n", 2+3);
    printf("Ini kurang : %d\n", 3-2);
    printf("Ini kali : %d\n", 3*3);
    printf("Ini bagi : %d\n", 3*3);
    printf("Ini bagi (desimal) : %f\n", 5.0/2.0);
    printf("Arithmetic : (%d+%d)/%d = %d\n",5 ,2, 3, (5+2)/3);
    
    printf("AND : %d\n", 6&5);
    printf("OR : %d\n", 6|5);
    printf("XOR : %d\n", 6^5);
    printf("Shift Right : %d\n", 6>>2);
    printf("Shift Left : %d\n", 6<<2);
    
    //Pre-Increment
    int angka = 0;
    printf("%d", ++angka);
    printf("%d", angka);
    //Post-Increment
    //Pre-Decrement
    //Post-Decrement
    
    return 0;
    }
