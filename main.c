//
//  main.c
//  TestArrays
//
//  Created by Miguel Ángel Butrón López on 2/5/19.
//  Copyright © 2019 Miguel Ángel Butrón López. All rights reserved.
//

#include <stdio.h>

void printArray(int arr[], int tam);

int main(void)
{
    int array [8]={1,2,3,5,7,11,13,17};
    
    printArray(array,8);
    
    int matrix [5][5];
    
    for(int i=0;i<5;++i){
        printf ("matrix[%i] es: ",i);
        
        for(int j=0;j<4;++j){
            matrix[i][j]= (i*j);
            printf(" %d,",matrix[i][j]);
        }
        for(int j=4;j<5;++j){
            matrix[i][j]= (i*j);
            printf(" %d",matrix[i][j]);
        }
        
        puts("");
    }
    puts("");
    return 0;
}
void printArray(int arr[], int tam)
{
    int i;
    printf("array1 es: ");
    
    for (i=0; i<(tam-1); ++i){
        printf("%d, ", arr[i]);
    }
    for (i=tam-1; i<(tam); ++i){
        printf("%d", arr[i]);
    }
    
    puts("");
}

