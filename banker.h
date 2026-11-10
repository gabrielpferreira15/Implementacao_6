#ifndef BANKER_H
#define BANKER_H

#define NUMBER_OF_CUSTOMERS 5
#define NUMBER_OF_RESOURCES 3

extern int available[NUMBER_OF_RESOURCES];

extern int maximum[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];

extern int allocation[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];

extern int need[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];

int request_resources(int customer_num, int request[]);

void release_resources(int customer_num, int release[]);

int is_safe_state();

#endif