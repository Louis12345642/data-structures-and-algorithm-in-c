#include <stdio.h>

int main(){

    //creating a pointer in c
    // a pointer is a special variable that stores the adress of another variable

    int x=8;
     int *pointer_x;
     pointer_x =&x;

    //  printf("am now pointing to x is  %d",*pointer_x);



     int i =56;
      int *p,*q;
      p=&i;
      p=q;

    //   printf("%d,%d",*p,*q);



    return 0;
}

