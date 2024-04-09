#include <stdio.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total1, total2, total3;

    printf("Welcome to the Game! \n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if (i == 7)
    {
        printf("The game has begun!\n\n");
    }
    else if (i == 0)
    {
        printf("The games has ended");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if (i == 7)
    {
        printf("1) Which one is the first search engine in the internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Duckduck go\n");

        printf("Enter your answer: ");
        scanf("%d", &ans1);

        if (ans1 == 2)
        {
            printf("Correct answer\n");
            point1 = 5;
            printf("You have scored %d points\n", point1);
        }
        else
        {
            printf("Wrong answer\n");
            point01 = 0;
            printf("You have scored %d points\n", point01);
        }

        printf("2) What is the decimal equivalent for 4f2h?\n\n");
        printf("1) 23");
        printf("2) 2950");
        printf("3) 1266");

        printf("Enter your answer: ");
        scanf("%d", &ans2);

        if (ans2 == 3)
        {
            printf("Correct answer\n");
            point2 = 5;
            printf("You have scored %d points\n", point2);
        }
        else
        {
            printf("Wrong answer\n");
            point02 = 0;
            printf("You have scored %d points\n", point02);
        }
    }
}