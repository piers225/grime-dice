#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <unistd.h>
/*#include <windows.h>*/

int main()
{
    int reddicewin1 = 0;
    int bluedicewin1 = 0;
    int greendicewin1 = 0;
    int reddicewin2 = 0;
    int bluedicewin2 = 0;
    int greendicewin2 = 0;

    for (int c = 1; c <= 50; c++)
    {
       sleep(0.01);

       int reddiceSides[6] = {4, 4, 4, 4, 4, 9};
       int reddice = reddiceSides[rand() % 6 + 1];

       int bluediceSides[6] = {2, 2, 2, 7, 7, 7};
       int bluedice = bluediceSides[rand() % 6 + 1];

       int greendiceSides[6] = {0, 4, 5, 5, 5, 5};
       int greendice = greendiceSides[rand() % 6 + 1];

       if (reddice > bluedice) {
           reddicewin1 = reddicewin1 + 1;
       }

       if (reddice < bluedice) {
           bluedicewin1 = bluedicewin1 + 1;
       }

       if (bluedice > greendice) {
           bluedicewin2 = bluedicewin2 + 1;
       }

       if (bluedice < greendice) {
          greendicewin1 = greendicewin1 + 1;
       }

       if (greendice > reddice) {
           greendicewin2 = greendicewin2 + 1;
       }

       if (greendice < reddice) {
           reddicewin2 = reddicewin2 + 1;
       }


        printf("Loop complete %d \n", c);
    }



    printf("%d\n", reddicewin1);

    printf("%d\n", reddicewin2);

    printf("%d\n", bluedicewin1);

    printf("%d\n", bluedicewin2);

    printf("%d\n", greendicewin1);

    printf("%d\n", greendicewin2);


    // Game of red dice against blue dice

    if (reddicewin1 > bluedicewin1) {
        printf("Red Dice wins against Blue Dice\n");
        printf("%d\n", reddicewin1);
    }

    if (reddicewin1 < bluedicewin1) {
        printf("Blue Dice wins against Red Dice\n");
        printf("%d\n", bluedicewin1);
    }

    // Game of blue dice against green dice
    if (bluedicewin2 > greendicewin1) {
        printf("Blue Dice wins against Green Dice\n");
        printf("%d\n", bluedicewin2);
    }

    if (bluedicewin2 < greendicewin1) {
        printf("Green Dice wins against Blue Dice\n");
        printf("%d\n", greendicewin1);
    }

    // Game of green dice against red dice

    if (greendicewin2 > reddicewin2) {
        printf("Green Dice wins against Red Dice\n");
        printf("%d\n", greendicewin2);
    }

    if (greendicewin2 < reddicewin2) {
        printf("Red Dice wins against Green Dice\n");
        printf("%d\n", reddicewin2);
    }

    return 0;

}
