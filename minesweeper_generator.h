#ifndef __MINESWEEPER_GENERATOR__H
#define __MINESWEEPER_GENERATOR__H


#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>
#include <stdio.h>

/* err_states */
enum {
    OK,
    ERR
};

/**
 * @brief underlying logic that defines the initialization phase. 
 * 
 * @param row 
 * @param col 
 * @param mines 
 */
int init_board(uint8_t row, uint8_t col, uint8_t mines);


/**
 * @brief use these macros for ease of integration: logical view.
 */
#define EASY_MODE()   init_board(9, 9, 10)
#define NORMAL_MODE() init_board(16, 16, 40)
#define EXPERT_MODE() init_board(16, 40, 99)

#define CUSTOM_MODE(row, col, mines) init_board(row, col, mines)

#ifdef __cplusplus
}
#endif /* end of __cplusplus */

#endif /* end of __MINESWEEPER_GENERATOR__ */