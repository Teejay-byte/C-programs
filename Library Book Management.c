//library book return manager
#include<stdio.h>

int main()
{
    int book_id,due_date,return_date,days_overdue,fine_amount,fine_rate;
    printf("ENTER BOOK ID:");
    scanf("%d",&book_id);

    printf("ENTER DUE DATE:");
    scanf("%d",&due_date);

    printf("ENTER RETURN DATES:");
    scanf("%d",&return_date);

    days_overdue=return_date-due_date;
    printf("DAYS OVERDUE VALUE IS(DAYS):%d\n",days_overdue);

 if (days_overdue>=15){
    fine_rate=100;
    fine_amount=fine_rate*days_overdue;
     printf("FINE AMOUNT IS ksh.%d",fine_amount);

    } else if (days_overdue>=8){
        fine_rate=50;
        fine_amount=fine_rate*days_overdue;
        printf("FINE AMOUNT IS ksh.%d\n",fine_amount);
        
    } else {
        fine_rate=20;
        fine_amount=fine_rate*days_overdue;
        printf("FINE AMOUNT IS ksh.%d\n",fine_amount);
    }
    printf("BOOK ID:%d\n",book_id);
    printf("DUE DATE IS:%d\n",due_date);
    printf("RETURN DATE:%d\n",return_date);
    printf("FINE RATE(@day) IS:%d\n",fine_rate);
 return 0;
}