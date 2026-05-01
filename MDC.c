#include <stdio.h>

// creating a function to get the submatrix(a matrix with 1 less row and column)

void getsubmatrix(int n,int col_to_skip, int matrix[n][n], int submatrix[n-1][n-1]){
    
    // starts with the number of rows of the submatrix

    int subm_i = 0;

    // here, we start with i = 1 to eliminate the first row, according with laplace expansion(the values will be used later)

    for(int i = 1; i < n; i++){
        int subm_j = 0;
        for(int j = 0; j < n; j++){

            //informing the computer to skip a certain column

            if(j == col_to_skip){
                continue;
            }

            // replacing the old matrix with the new submatrix

            submatrix[subm_i][subm_j] = matrix[i][j];

            //IF and only IF the column ISNT the column to skip, the loop can add 1 to its variable

            subm_j++;
        }
        subm_i++;    
    }
}
int getdet(int n, int matrix[n][n]){
    int det = 0;

    // if the matrix is too trivial to the its determinant, calculate it immediately

    if (n == 1){
        det = matrix[0][0];
        return det;
    }
    else if (n == 2){
        det = (matrix[0][0] * matrix[1][1])-(matrix[0][1] * matrix[1][0]);
        return det;
    }

    //else...

    else{

        // The sign value represents the sequence in laplace expansion (+ - + - + -)

        int sign = 1;

        // Showing to the computer that the submatrix is a matrix [n-1][n-1]

        int submatrix[n-1][n-1];
        for(int i = 0; i < n; i++){
            getsubmatrix(n, i, matrix, submatrix);

            // For each submatrix determinant we need to add to the current total determinant value the previous determinant, to it, we multiply by the current sign and does the calc. OBS: the get det is for the submatrix

            det += sign * matrix[0][i] * getdet(n - 1, submatrix);

            // Alternating the sign

            sign = -sign;
        }

        // Now we return the value of the submatrix

        return det;
    }
}

int main(){

    //presenting the variables

    int n = 0;
    int det = 0;

    // Gathering the users input(and checking if it's valid)

    while (n == 0 || n < 0){
        printf("Insert a VALID number of rows and columns(square matrix): ");
        scanf(" %d", &n);
    }
    
    //Creating the full matrix(matrix with the desired size)

    int matrix[n][n];

    // Gathering each element

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Insert the element[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for(int k = 0; k < n; k++){
        for(int l = 0; l < n; l++){
            printf("%d ", matrix[k][l]);
        }
        printf("\n");
    }

    // We, now, start the machine and print its result

    det = getdet(n, matrix);
    printf("\nDeterminant: %d\n", det);

    return 0;
}