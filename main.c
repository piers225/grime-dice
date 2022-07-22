#include<stdio.h>
#include<stdlib.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main()
{
    int reddicewin1 = 0;
    int bluedicewin1 = 0;
    int greendicewin1 = 0;
    int reddicewin2 = 0;
    int bluedicewin2 = 0;
    int greendicewin2 = 0;

    for (int a = 0; a < 6; a++)
    {
        for (int b = 0; b < 6; b++) 
        {
            for (int c = 0; c < 6; c++) {

                int reddiceSides[6] = {4, 4, 4, 4, 4, 9};
                int reddice = reddiceSides[a];

                int bluediceSides[6] = {2, 2, 2, 7, 7, 7};
                int bluedice = bluediceSides[b];

                int greendiceSides[6] = {0, 4, 5, 5, 5, 5};
                int greendice = greendiceSides[c];

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
            }

        }
    }

    int loops = 6 * 6 * 6;

    printf("Loops complete %d \n", loops);

    int threshold = loops / 2;

    printf("To win %d \n", threshold);
    
    printf("%sRed dice against blue dice %d\n", reddicewin1 > threshold ?  KRED : KWHT, reddicewin1);

    printf("%sBlue dice against red dice %d\n", bluedicewin1 > threshold ?  KBLU : KWHT, bluedicewin1);

    printf("%sRed dice against green dice  %d\n", reddicewin2 > threshold ?  KRED : KWHT, reddicewin2);

    printf("%sGreen dice against red dice %d\n", greendicewin2 > threshold ?  KGRN : KWHT, greendicewin2);

    printf("%sBlue dice against green dice %d\n", bluedicewin2 > threshold ?  KBLU : KWHT, bluedicewin2);

    printf("%sGreen dice against blue dice  %d\n", greendicewin1 > threshold ?  KGRN : KWHT, greendicewin1);

    return 0;

}