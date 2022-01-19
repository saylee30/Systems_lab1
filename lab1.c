#include <stdio.h>

int main() 
{
    int n;        //Declare the nummber
    printf("Enter the number\n");
    scanf("%d",&n);    //Initialize the number

    int count=0;         //Inciate a count variable
    
    for(int i=2;i<n;i++)  //Check for factors
    {
        if(n%i==0)
        count++;  // Value increase after the execution of the statement
    }
    // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    printf("%d is neither prime nor composite.", n);
  } 
  else 

    if(count!=0)           //Check whether Prime or not
    {
        printf("It's not a prime number\n");
    }
    
    else
    {
        printf("Is a Prime number\n");
    }
    
    return 0;
}