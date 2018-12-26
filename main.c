#include <stdio.h>
#include "preferences.h"
#include "source.h"

int main()
{
    unsigned int size = 5;
    unsigned int user;
    struct preferences array[size];
    scaner(array, size);
    printf("Enter user: ");
    scanf("%u", &user);
    printf("\n\n");
    analizer(array, size, user);
    return 0;
}
