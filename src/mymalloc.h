// gaurd safty
#ifndef MYMALLOC_H
#define MYMALLOC_H

#include <stddef.h> // this is include since we will be using size_t
// size_t is an unsigned integer that is used to represent the size of objects in memory


// function declarations

/* 
 * my_malloc:
 * function allocates 'size' bytes of memory 
 * returns pointer to the begining of that allocated block
 * 
 * void* is a generic pointer, 
 * it can hold address of any datatype, 
 * but it doesnt know what type of data its pointing to yet...
 *
 * we are using that because, we might use my_malloc to allocate memory for different type of data,
 * so we are definig the the return type of my_malloc as void*
 *
 */
void* my_malloc(size_t size);

/*
 * my_free:
 * used to free previously allocated memoery
 * this fucntion has no return type
 * 
 * this function accepts pointer of any datatype
 * it has a paramter type of generictype void*
 * note: void means none, void* means generic datatype(no yet decided)
 */
void my_free(void* ptr);

/*
 * my_realloc:
 * used to resize the previously allocated memory
 * 
 * its a generic pointer return type
 * void* because we can change the datatype of previously allocated block
 *
 * its takes two parameter
 * void* ptr - points to the block that want to resized
 * size - new size in bytes 
 *
 * */
void* my_realloc(void* ptr, size_t size);

#endif
