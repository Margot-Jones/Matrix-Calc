#include "arithmetic_functions.h"
#include <malloc.h>

void function_Addition(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[i][j] + B_matrix[i][j];
        }
    }

}
void function_Difference(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[i][j] - B_matrix[i][j];
        }
    }


}
void function_TransposeA(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = A_matrix[j][i];
        }
    }

}
void function_TransposeB(int** A_matrix, int** B_matrix, int** C_matrix, int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = B_matrix[j][i];
        }
    }

}
void function_Multiplication(int** A_matrix, int** B_matrix, int** C_matrix, int size){

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
