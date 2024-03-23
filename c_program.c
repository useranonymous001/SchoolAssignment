#include <stdio.h>
#include <conio.h>

struct bookKeeper
{
    char bookName[30];

} book[1000];

int main()
{
    // using structure to make a book keeping company
    char ownerName[30];
    int secretKey;
    int bookNum, i, j;
    printf("Keep Your Books Safe Here !!\n\n");

    printf("No. of books to store: ");
    scanf("%d", &bookNum);

    printf("Enter your Name: ");
    // gets(ownerName);
    scanf("%s", ownerName);

    for (i = 1; i <= bookNum; i++)
    {
        printf("Enter %d BookName: ", i);
        scanf("%s", book[i].bookName);
    }

    printf("\n\nEnter A secret key of 3 digits: ");
    scanf("%3d", &secretKey);

    printf("\n\nfinished uploading your books......../\n\n");
    int choice, checkKey;
    printf("Do you want to display it : (1 == YES || 2 == NO) : ");
    scanf("%1d", &choice);

    switch (choice)
    {

    case 1:
        printf("Enter Your secret key: ");
        scanf("%d", &checkKey);

        if (secretKey == checkKey)
        {
            printf("\n\nDisplaying Your Books \n\n");

            printf("Owner: %s\n\n", ownerName);

            for (i = 1; i <= bookNum; i++)
            {
                printf("%s\t\t", book[i].bookName);
            }
        }
        else
        {
            printf("Invalid Key !!");
            break;
        }
        break;

    case 2:
        printf("Your Books are stored !! ");
        break;

    default:
        printf("Invalid Option !!");
        break;
    }

    return 0;
}