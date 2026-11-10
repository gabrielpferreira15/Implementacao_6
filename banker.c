#include <stdio.h>
#include <stdlib.h>
#include "banker.h"

int available[NUMBER_OF_RESOURCES];
int maximum[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];
int allocation[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];
int need[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];

int is_safe_state() {
    return 1; 
}

int request_resources(int customer_num, int request[]) {
    return 0; 
}

void release_resources(int customer_num, int release[]) {
}