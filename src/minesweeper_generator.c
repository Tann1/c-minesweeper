#include "minesweeper_generator.h"


/* start structure(s), enum(s) related to structures */
/* used for current state of the cell */
enum {
    REVEALED,
    UNREVEALED,
    MAX_CELL_STATES
};

/* used for value of the cell*/
enum {
    BLANK,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    MINE,
    MAX_CELL_VALUES
};

typedef struct cell {
    uint8_t val;
    uint8_t state;
} cell_t;

typedef struct board {
    cell_t **cells;
} board_t;

/* end of structure(s), enum(s) related to structures */


int init_board(uint8_t row, uint8_t col, uint8_t mines)
{
    printf("row: %d, col: %d, mines %d\n", row, col, mines);
    return OK;
}