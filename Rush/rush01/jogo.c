/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jogo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:44:09 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/27 10:50:22 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int isValid(int **grid, int row, int col, int num) {
    int i;
    for (i = 0; i < 4; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return 0;
        }
    }
    return 1;
}

int solve(int **grid, int row, int col) {
    if (row == 4) {
        return 1;
    }

    if (col == 4) {
        return solve(grid, row + 1, 0);
    }

    if (grid[row][col] != 0) {
        return solve(grid, row, col + 1);
    }

    int num;
    for (num = 1; num <= 4; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (solve(grid, row, col + 1)) {
                return 1;
            }

            grid[row][col] = 0;
        }
    }

    return 0;
}

void printNumber(int **grid, int row, int col) {
    if (col == 4) {
        col = 0;
        row++;
        write(STDOUT_FILENO, "\n", 1);
    }

    if (row == 4) {
        return;
    }

    char c = grid[row][col] + '0';
    write(STDOUT_FILENO, &c, 1);
    write(STDOUT_FILENO, " ", 1);

    printNumber(grid, row, col + 1);
}

void writeGrid(int **grid) {
    printNumber(grid, 0, 0);
}

int main() {
    int **grid = (int **)malloc(4 * sizeof(int *));
    int i;

    for (i = 0; i < 4; i++) {
        grid[i] = (int *)malloc(4 * sizeof(int));
    }

    char prompt[] = "Informe os pontos de visão (1-4) em ordem:\n";
    write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);

    for (i = 0; i < 4; i++) {
        read(STDIN_FILENO, &grid[i][0], 2);
        read(STDIN_FILENO, &grid[i][1], 2);
        read(STDIN_FILENO, &grid[i][2], 2);
        read(STDIN_FILENO, &grid[i][3], 2);
    }

    if (solve(grid, 0, 0)) {
        writeGrid(grid);
    } else {
        char msg[] = "Não foi possível encontrar uma solução.\n";
        write(STDOUT_FILENO, msg, sizeof(msg) - 1);
    }

    for (i = 0; i < 4; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}
