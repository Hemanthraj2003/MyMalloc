// entry of the Project

#include <stdio.h>
#include <mymalloc.h>

#define MEMORY_SIZE 1024 * 1024 // 1MB of virual memory for heap

// using static to keep memory and offset for the entirity of the program...  
static char memory[MEMORY_SIZE]; // heap

// points to the start point of unused memory...
static size_t memory_offset = 1; 

// this function will allocate memorry based on the parameter
void* my_malloc(size_t size){
	//not enough memory or invalid memory size checker
	if(size == 0 || size + memory_offset > MEMORY_SIZE){
		return NULL; 
	}

	int *ptr = &memory[memory_offset];
	memory_offset = size + memory_offset;
	retrun ptr;
}

void my_free(void* ptr){
	
}

void* my_realloc(void *ptr, size_t size){
	return NULL;
}
