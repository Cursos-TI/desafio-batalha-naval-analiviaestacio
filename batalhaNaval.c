#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {

    // =========================================================
    // NÍVEL NOVATO - Posicionamento de Navios (10x10)
    // =========================================================

    int tabuleiro[10][10];
    int i, j;

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios de tamanho fixo 3
    int tamanhoNavio = 3;

    // Coordenadas iniciais (definidas diretamente no código)
    int linhaH = 2, colunaH = 1; // Navio horizontal
    int linhaV = 5, colunaV = 7; // Navio vertical

    // -------------------------------
    // Posiciona Navio Horizontal
    // -------------------------------
    if (colunaH + tamanhoNavio <= 10) {
        for (i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = 3;
            }
        }
    }

    // -------------------------------
    // Posiciona Navio Vertical
    // -------------------------------
    if (linhaV + tamanhoNavio <= 10) {
        for (i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
    }

    // =========================================================
    // NÍVEL AVENTUREIRO - Navios Diagonais
    // =========================================================

    int linhaD1 = 0, colunaD1 = 0; // Diagonal principal
    int linhaD2 = 7, colunaD2 = 0; // Diagonal secundária

    // Diagonal principal
    for (i = 0; i < tamanhoNavio; i++) {
        if ((linhaD1 + i < 10) && (colunaD1 + i < 10)) {
            if (tabuleiro[linhaD1 + i][colunaD1 + i] == 0) {
                tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
            }
        }
    }

    // Diagonal secundária
    for (i = 0; i < tamanhoNavio; i++) {
        if ((linhaD2 - i >= 0) && (colunaD2 + i < 10)) {
            if (tabuleiro[linhaD2 - i][colunaD2 + i] == 0) {
                tabuleiro[linhaD2 - i][colunaD2 + i] = 3;
            }
        }
    }

    // -------------------------------
    // Exibe Tabuleiro Completo
    // -------------------------------
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // =========================================================
    // NÍVEL MESTRE - Habilidades Especiais (5x5 exemplo)
    // =========================================================

    int habilidade[5][5];

    // Inicializa com 0
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            habilidade[i][j] = 0;
        }
    }

    printf("\n=== HABILIDADE: CRUZ ===\n");

    // Cruz
    for (i = 0; i < 5; i++) {
        habilidade[2][i] = 1; // linha central
        habilidade[i][2] = 1; // coluna central
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Reset matriz
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            habilidade[i][j] = 0;

    printf("\n=== HABILIDADE: OCTAEDRO ===\n");

    habilidade[0][2] = 1;
    habilidade[1][1] = 1;
    habilidade[1][2] = 1;
    habilidade[1][3] = 1;
    habilidade[2][2] = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Reset matriz
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            habilidade[i][j] = 0;

    printf("\n=== HABILIDADE: CONE ===\n");

    habilidade[0][2] = 1;
    habilidade[1][1] = 1;
    habilidade[1][2] = 1;
    habilidade[1][3] = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
