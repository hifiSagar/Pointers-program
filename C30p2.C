

#include<stdio.h>
int main(){
    int a = 5;
    int * ptr = & a;            /*ABOUT ARTHIMETIC INCREMENTAL AND DICREMENTAL*/
    a++;
    printf("%d \n",ptr);
    ptr++;
    printf("%d \n",ptr);
    ptr--;
    printf("%d \n",ptr);
    printf("%d \n",a);
    return 0;

    }