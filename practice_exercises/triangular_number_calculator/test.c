#include <stdio.h>


extern int calculate_nth_triangular_number(int n_th_number);


int main() {

    // The sequence of triangular numbers is the following:
    // 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 
    // 105, 120, 136, 153, 171, 190, 210

    printf("0-th number: %d\n", calculate_nth_triangular_number(0));
    printf("1-th number: %d\n", calculate_nth_triangular_number(1));
    printf("2-th number: %d\n", calculate_nth_triangular_number(2));
    printf("4-th number: %d\n", calculate_nth_triangular_number(4));
    printf("5-th number: %d\n", calculate_nth_triangular_number(5));
    printf("6-th number: %d\n", calculate_nth_triangular_number(6));
    printf("7-th number: %d\n", calculate_nth_triangular_number(7));
    printf("8-th number: %d\n", calculate_nth_triangular_number(8));
    printf("9-th number: %d\n", calculate_nth_triangular_number(9));
    printf("10-th number: %d\n", calculate_nth_triangular_number(10));
    printf("11-th number: %d\n", calculate_nth_triangular_number(11));
    printf("12-th number: %d\n", calculate_nth_triangular_number(12));
    printf("13-th number: %d\n", calculate_nth_triangular_number(13));
    printf("14-th number: %d\n", calculate_nth_triangular_number(14));
    printf("15-th number: %d\n", calculate_nth_triangular_number(15));
    printf("16-th number: %d\n", calculate_nth_triangular_number(16));
    printf("17-th number: %d\n", calculate_nth_triangular_number(17));

    return 0;
}
