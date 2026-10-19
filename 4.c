#include <stdio.h>

int main() {
    int seats[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &seats[i][j]);
        }
    }
    
    int row, col;
    scanf("%d %d", &row, &col);
    
    if (seats[row - 1][col - 1] == 0) {
        printf("%d-qator, %d-orindiq: Bosh\n", row, col);
    } else {
        printf("%d-qator, %d-orindiq: Band\n", row, col);
    }
    
    return 0;
}