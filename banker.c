#include <stdio.h>
#include <stdlib.h>
#include "banker.h"


int number_of_customers = 0;
int number_of_resources = 0;

int *available = NULL;
int **maximum = NULL;
int **allocation = NULL;
int **need = NULL;

void alocar() {
    int i;
    
    available = (int *)calloc(number_of_resources, sizeof(int));
    
    maximum = (int **)calloc(number_of_customers, sizeof(int *));
    allocation = (int **)calloc(number_of_customers, sizeof(int *));
    need = (int **)calloc(number_of_customers, sizeof(int *));
    
    for (i = 0; i < number_of_customers; i++) {
        maximum[i] = (int *)calloc(number_of_resources, sizeof(int));
        allocation[i] = (int *)calloc(number_of_resources, sizeof(int));
        need[i] = (int *)calloc(number_of_resources, sizeof(int));
    }
}

void liberar() {
    int i;
    
    if (maximum != NULL) {
        for (i = 0; i < number_of_customers; i++) {
            free(maximum[i]);
            free(allocation[i]);
            free(need[i]);
        }
        free(maximum);
        free(allocation);
        free(need);
    }
    if (available != NULL) {
        free(available);
    }
}

int is_safe_state() {
    return 1; 
}

int request_resources(int customer_num, int request[], FILE *out) {
    return 0; 
}

void release_resources(int customer_num, int release[], FILE *out) {
}

void print_matrices(FILE *out) {
}