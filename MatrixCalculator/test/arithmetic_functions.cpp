#include "arithmetic_functions.h"
#include <malloc.h>

void Add(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[i][j] + B_matrix[i][j];
        }
    }

}
void Dif(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[i][j] - B_matrix[i][j];
        }
    }


}
void TransA(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[j][i];
        }
    }

}
void TransB(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = B_matrix[j][i];
        }
    }

}
void Mult(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int count = 0; count < size; count++){
                sum += A_matrix[i][count]*B_matrix[count][j];
            }
            C_matrix[i][j] = sum;
            sum = 0;
        }
    }
}
