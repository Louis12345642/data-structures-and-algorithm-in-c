//array is a data structure for store sequential data 
#include <stdio.h>

int linear_search(int target,int numbers[] ){
    for(int i; i<6; i++){
        if (target ==numbers[i])
        {
           printf("yeah the number exist");
           break;
        }


        
    }

    return -1;
rfrfsd

}

int main(){


int numbers[]={1,2,3,4,5,6};

int target =20;
linear_search(target,numbers);


    return 0;
}