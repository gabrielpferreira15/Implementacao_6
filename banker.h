#ifndef BANKER_H
#define BANKER_H

extern int number_of_customers;
extern int number_of_resources;
extern int *available;       
extern int **maximum;        
extern int **allocation;     
extern int **need;           

int request_resources(int customer_num, int request[], FILE *out);
void release_resources(int customer_num, int release[], FILE *out);
int is_safe_state(void);

void allocate_memory(void);
void free_memory(void);
void print_matrices(FILE *out);

#endif 