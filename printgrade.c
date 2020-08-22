/*
ALGORITHM:

STEP 1:START

STEP 2:Declare variables of type float for marks of each of the four subjects i.e.math,phy,chem,bio

STEP 3:Read inputs from user for marks of each of the four subjects

STEP 4:Calculate percentage
            percentage=(math+phy+chem+bio)/4
STEP 5:START IF percentage >=75
            output Grade A and passed
STEP 6:ELSE IF percentage >=50
            output Grade B and passed
STEP 7:ELSE IF percentage >=35
            output Grade C and passed
STEP 8:ELSE
            output Grade D and failed
STEP 9:END ELSE IF

STEP 10:END

*/
#include<stdio.h>
int main(){
    float math,phy,chem,bio,percentage;
    printf("Enter marks of mathematics,physics,chemistry,biology respectively");
    scanf("%f%f%f%f",&math,&phy,&chem,&bio);
    percentage=(math+phy+chem+bio)/4;
    if(percentage>=75){
        printf("Grade A\n");
        printf("Passed");
    }else if(percentage>=50){
        printf("Grade B\n");
        printf("Passed");
    }else if(percentage>=35){
        printf("Grade C\n");
        printf("Passed");
    }else{
        printf("Grade D\n");
        printf("Failed");
    }

    return 0;
}
