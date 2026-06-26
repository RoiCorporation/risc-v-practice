#include <stdio.h>


extern int divide(int dividend, int divisor, int *remainder);


int main() {
    int remainder;

    printf(
        "0 / 3 = %d, remainder %d\n",
        divide(0, 3, &remainder), 
        remainder
    );
    printf(
        "0 / -510 = %d, remainder %d\n",
        divide(0, -510, &remainder), 
        remainder
    );
    printf(
        "13 / 3 = %d, remainder %d\n",
        divide(13, 3, &remainder), 
        remainder
    );
    printf(
        "-71 / 15 = %d, remainder %d\n",
        divide(-71, 15, &remainder), 
        remainder
    );
    printf(
        "-26 / -7 = %d, remainder %d\n",
        divide(-26, -7, &remainder), 
        remainder
    );
    printf(
        "91772 / -43 = %d, remainder %d\n",
        divide(91772, -43, &remainder), 
        remainder
    );
    printf(
        "816 / 41 = %d, remainder %d\n",
        divide(816, 41, &remainder), 
        remainder
    );
    printf(
        "-1927 / 802 = %d, remainder %d\n",
        divide(-1927, 802, &remainder), 
        remainder
    );
    printf(
        "257715 / -5288 = %d, remainder %d\n",
        divide(257715, -5288, &remainder), 
        remainder
    );
    printf(
        "-10023 / -92 = %d, remainder %d\n",
        divide(-10023, -92, &remainder), 
        remainder
    );

    return 0;
}
