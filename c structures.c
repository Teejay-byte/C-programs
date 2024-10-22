// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

struct student{
  int ID;
  char email[30];
  char name[20];
  char reg_no[50];
  float marks;
  char phone[10];
}student1;

int main(){
strcpy(student1.name,"wanjohi");
strcpy(student1.reg_no,"BCS-05-0684/2024");
strcpy(student1.email,"tjjohnes025@gmail.com");
student1.ID=2479384;
strcpy(student1.phone,"0726538472");
student1.marks=70.5;

printf("name:%S \n",student1.name);
printf("reg_no:%s \n",student1.reg_no);
printf("email:%s \n",student1.email);
printf("ID number:%d \n",student1.ID);
printf("phone number:%s \n",student1.phone);
printf("marks:%f \n",student1.marks);
    return 0;
}