//this is the way of including c stardard output and input
#include <stdio.h>

// this is the main function which is the enter part of out c program

int main()
{
    // this is the variable for storing the sum
    int sum = 0;

    // these are the variables for storing  test scores
    int firstTestScore,secondTestScore,thirdTestScore;

    // input for the first test score
    printf("Enter the first test score\n");
    // here we are accepting the input using the scanf built in function and initialising the value to the first test score
    scanf("%d", &firstTestScore);

    //we increment the value of sum
    sum = sum +firstTestScore;

    // input for the second test score
    printf("Enter the second test score\n");
    scanf("%d", &secondTestScore);
 
 // incrementing the value of sum by the second test score
    sum = sum+secondTestScore;
    // input for the third test score
    printf("Enter the third test score\n");
    scanf("%d", &thirdTestScore);

     // incrementing the value of sum by the third test test score
    sum = sum + thirdTestScore;

    // here is the output for the sum
    printf("The sum of the three numbers is %d", sum);


    return 0;

    int dog = "woe";
    int cat = "meo";

    if (dog == "woe")
    {
      printf("woe");
    }
    else if (cat ="woe")
    {
    printf("am a cat");
    }
    
    

}
