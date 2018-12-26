#include "source.h"
#include "preferences.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

void scaner(struct preferences* array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        printf("Enter typy 1: ");
        scanf("%u", &array[i].type1);
        printf("Enter typy 2: ");
        scanf("%u", &array[i].type2);
        printf("Enter typy 3: ");
        scanf("%u", &array[i].type3);


        printf("\n");
    }
}

void analizer(struct preferences* array, const unsigned int size, const unsigned int user)
    {

    }
   printInfoUser(array, index);
}




