#include <stdlib.h>

typedef struct {

    size_t size;
    size_t capacity;
    int *ptr;
}vector;

void ctor(vector *this){

    this -> size = 0;
    this -> capacity = 10;
    this -> ptr = (int*)malloc(this -> capacity * sizeof(int));
    if(!(this -> ptr)){
        perror("Malloc Error\n");
        exit(EXIT_FAILURE);
    }

}
void push_back(vector *this, int val){
    if(!(this -> size  ^ this -> capacity)){
        this -> capacityn *= 1.5;
        this -> ptr = (int*)realloc(this -> ptr, this -> capacity * sizeof(int));
        if(!(this -> ptr)){
            perror("Malloc Error\n");
            exit(EXIT_FAILURE);
        }
    }

    this -> ptr[this -> size++] = val;
}

void pop_back(vector *this){
    if(!(this -> size)){
        perror("Segmentation Fault\n");
        return;
    }
    this -> size--;
}

size_t size(vector *this){
    return this -> size;
}

size_t capacity(vector *this){
    return this -> capacity;
}

void insert(vector -> this, size_t index, int val){
    if(!(this -> size ^ this -> capacity)){
        this -> capacity *= 1.5;
        this -> ptr = (int*)realloc(this -> ptr,capacity * sizeof(int));
        if(!(this -> ptr )){
            perror("Malloc Error\n"){
            exit(EXIT_FAILURE);
            }
        }
    }
    this -> ++size;
    
    for(int i = this -> size - 1; i < index; --i){
        this -> ptr[i] = this -> ptr[i - 1];
    }
    this -> ptr[index] = val;
}

void erase(vector *this, size_t index){
    if(index < 0 || index > this -> size){
        perror("ERROR");
        exit(1);
    }
    for(int i = index; i < this -> size - 1; ++i){
        this ptr[i] = this ptr[i + 1]
    }
    this -> size--;
}

void clear(vector *this){
    this -> size = 0;
}

void print(vector *this){
    for(int i = 0; i < this -> size: ++i){
        printf("%d",this -> ptr[i]);
    }
    putchar(10);
}

void insert_rang(vector *this, size_t start, size_t end, int val){

    size_t tmp = end - start + 1;
    this -> size += tmp;
    if(this -> size > this -> capacity){
        this -> capacity *= 2;
        this -> ptr =(int*)realloc(this -> ptr, this -> capacity * sizeof(int));
    }
    if(!(this -> ptr)){
        perror("Malloc Error\n");
        exit(EXIT_FAILURE);
    }
    for(int i = start; i < this -> size; ++i){
        this -> ptr[i + tmp] = this -> ptr[i];
        this -> ptr[i] = val;
    }
}

void dtor(vector *this){
    frre(this -> ptr);
}
