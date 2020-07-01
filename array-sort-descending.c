#include <stdio.h>
#include <conio.h>

void main()
{
    int size,c;
    int a[100]; //must have constant value;

    printf("Enter Array Size:");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter a Number:");
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }

    getch();
}
