#include <stdio.h>
 int main()
 {
    //declaration and initialization
    char a;    //%c
    char name[]="keith";     //%s
    int age ;                  //0-9, %d
    float area ;            //%f
    double salary;      //%lf
    printf("Enter a character:");
    scanf("%c",&a);
    printf("The character is: %c \n",a);
    
    printf("Enter a string:");
    scanf("%s",&name);
    printf("The string is: %s \n", name);
    
    printf("Enter an integer:");
    scanf("%d",&age);
    printf("The integer is: %d \n", age);
    
    printf("Enter a float:");
    scanf("%f",&area);
    printf("The float is: %f \n", area);
    
    printf("Enter a double:");
    scanf("%lf",&salary);
    printf("The double is:Ksh %lf \n",salary);
    
    return 0;
 }