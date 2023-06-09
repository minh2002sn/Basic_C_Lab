#include <stdio.h>
#include "main.h"
#include "input.h"
#include "output.h"

int main()
{
    /* Variable holds number of people */
    int num_people = 0;

    /* Get input */
    input_handle(&num_people);
    
    /* Generate output.txt file */
    if(output_handle(num_people) == 1)
        return 1;

    return 0;
}