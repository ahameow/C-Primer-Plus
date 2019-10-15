#include <stdio.h>

int main()
{
    int y;
    printf("This program is made to calculate the next leap year of your input year\n");
    printf("Enter the year:");
    scanf("%d",&y);

    if (y%4==0)           //普通闰年||世纪闰年||世纪闰年的前一个闰年的后四年即为下一个闰年
        y++;

        while(y%100==0&&y%400!=0||y%4!=0)
    {
        y++;
    }

    printf("The next leap year is %d.",y);
    return 0;
}
