#include <stdio.h>
#include <math.h>

int  goodbye(int number ){
for( int i =0; i<10; i++){
printf("%d",i);
}
}
int main(){
goodbye(20);


 printf("********calculator***********\n");

int number_one = 2;
int number_two = 4;
printf("%d",number_one);
// char operator[] ="+";



 //steps
 //check if the sign is given

 //check the sign type
 //do the calculation and outpu the results 

//  const float PI = 3.14;
// float radius = 20;
// float area = PI*radius;

// printf("%d");

//circumference program

double A;
double B;
double C;
printf("Enter side one: ");
scanf("%lf",&A);
printf("Enter side Two \n");
scanf("%lf",&B);

C = sqrt(A*A + B*B);

printf("Circumference is %lf",C);

printf("********calculating the circumference of a circle********* \n");
const double PI =3.14;
double circumference;
double radius;

printf("Enter radius: ");
scanf("%lf",&radius);
circumference =PI *2*radius;

printf("The circumference is %lf",circumference);

printf("********checking your age********* \n");
int age;
printf("enter age");
scanf("%d",&age);
if(age < 18){
    printf("you young ");
}
else{
    printf("commond grown ");
}

    return 0;
}