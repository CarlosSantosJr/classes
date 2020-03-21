int matrices_addition(int **mat, int column_offset, int row_offset, int size, int direction) {
    int soma = 0;

    if (column_offset >= size || row_offset >= size) {
        return 0;
    }

    if (direction == 0) {
        while(row_offset > -1) {
            soma = soma + mat[row_offset][column_offset];
            row_offset--;
        }
    } else if (direction == 1 || direction == 2) {
        while(column_offset < size && row_offset > -1) {
            soma = soma + mat[row_offset][column_offset];
            column_offset++;
            row_offset--;
        }
        
    } else if (direction == 3) {
        while(column_offset < size) {
            soma = soma + mat[row_offset][column_offset];
            column_offset++;
        }
        
    } else if (direction == 4 || direction == 5) {
        while(column_offset < size && row_offset < size) {
            soma = soma + mat[row_offset][column_offset];
            column_offset++;
            row_offset++;
        }
        
    } else if (direction == 6) {
        while(row_offset < size) {
            soma = soma + mat[row_offset][column_offset];
            row_offset++;
        }
        
    } else if (direction == 7 || direction == 8) {
        while(column_offset > -1 && row_offset < size) {
            soma = soma + mat[row_offset][column_offset];
            row_offset++;
            column_offset--;
        }
        
    } else if (direction == 9) {
        while(column_offset > -1) {
            soma = soma + mat[row_offset][column_offset];
            column_offset--;
        }
        
    } else if (direction == 10 || direction == 11) {
        while(column_offset > -1 && row_offset > -1) {
            soma = soma + mat[row_offset][column_offset];
            row_offset--;
            column_offset--;
        }
        
    }

    return soma;
}