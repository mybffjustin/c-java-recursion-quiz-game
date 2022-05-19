// Justin Hoang
#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][256] = {"1. A recursive method is one that directly or indirectly invokes itself. For a recursive method to terminate, there must be one or more ___ ___.: ",
                             "2. Recursion is an alternative form of program control. It is essentially ___ without a loop control. It can be used to write simple, clear solutions for inherently recursive problems that would otherwise be difficult to solve.: ",
                             "3. Sometimes the original method needs to be modified to receive additional parameters in order to be invoked recursively. A recursive ___ method can be defined for this purpose.: "};

    char options[][256] = {"A. computers", "B. base cases", "C. worst case", "D. best case",
                           "A. repetition", "B. copying", "C. scanning", "D. rotating",
                           "A. engine", "B. helper", "C. abstract", "D. starter"};

    char answers[3] = {'B', 'A', 'B'};
    int numQuests = sizeof(questions) / sizeof(questions[0]);
    char selection;
    int score = 0;

    printf("JAVA RECURSION QUIZ GAME WRITTEN IN C\n");
    printf("Recursion is a technique that leads to elegant solutions to problems that are difficult to program using simple loops.\n");
    for (int i = 0; i < numQuests; i++)
    {
        printf("*************************\n");
        printf("%s\n", questions[i]);
        printf("*************************\n");
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("Selection: ");
        scanf("\n%c", &selection);
        selection = toupper(selection);
        if (selection == answers[i])
        {
            printf("*******Correct.*******\n");
            score++;
        }
        else
        {
            printf("*******Incorrect.*******\n");
        }
    }
    printf("*************************\n");
    printf("FINAL SCORE: %i / %i \n", score, numQuests);
    printf("*************************\n");
    return 0;
}