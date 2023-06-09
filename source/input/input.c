#include <stdio.h>
#include "input.h"

/* Max number of people */
#define MAX_PEOPLE      255

/*
 * @brief   Receive number of people from user
 * @param   pointer to int variable that storing number of people
 */
void input_handle(int *p_num_people)
{
    do
    {
        printf("Type number of people (0-255): ");
        scanf("%d", p_num_people);
    } while(*p_num_people < 0 || *p_num_people > 255);
}
