
#include <stdio.h>
int main()
{
    // int i, j, n, temp;

    // printf("Enter the no. of numbers: ");
    // scanf("%d", &n);
    // int numbers[n];
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter number %d: ", i + 1);
    //     scanf("%d", &numbers[i]);
    // }

    // printf("\nOriginal Array: \n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t", numbers[i]);
    // }

    // printf("\n\nArray in Ascending Order: \n");
    // for (i = 0; i < n; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (numbers[i] > numbers[j])
    //         {
    //             temp = numbers[i];
    //             numbers[i] = numbers[j];
    //             numbers[j] = temp;
    //         }
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t", numbers[i]);
    // }

    // printf("\n\nArray in Descending Order: \n");
    // for (i = 1; i <= n; i++)
    // {
    //     printf("%d\t", numbers[n - i]);
    // }

    char name[23];
    printf("Enter name: ");
    gets(name);

    printf("%s", name);

    return 0;
}