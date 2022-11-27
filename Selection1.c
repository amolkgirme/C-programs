#include<stdio.h>
#include<stdbool.h>

// %       Mod
// ==      Equality

bool checkEven(int iNo)
{
    return (iNo%2)==0 ;

    // if((iNo%2) == 0){
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}

int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter one number\n");
    scanf("%d",&iValue);

    bRet=checkEven(iValue);
    //Ternory Operator
    bRet ? printf("It is even number\n"): printf("It is odd number\n");

    //If else
    if(bRet== true){
        printf("It is even number\n");
    }
    else{
        printf("It is Odd number\n");
    }

    return 0;
}