/*
 * @file    someone.h
 * @brief   Header file of someone module
 */
#ifndef SOMEONE_H
#define SOMEONE_H

#include <sys/stat.h>

/*
 * @brief   action_t function pointer data type definition
 */
typedef void (*action_t)(FILE *);

/*
 * @brief   type_t data type declaration
 */
typedef enum type_t type_t;

/*
 * @brief   someone_t data type declaration
 */
typedef struct someone_t someone_t;

void someone_init(someone_t *p_h_someone, type_t type);
void someone_print_income(someone_t *p_h_someone);

#endif /* SOMEONE_H */
