#include <assert.h>


extern int calculate_nth_triangular_number(int n_th_number);


int main() {

    // The sequence of triangular numbers is the following:
    // 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91,
    // 105, 120, 136, 153, 171, 190, 210

    assert(0 == calculate_nth_triangular_number(0));
    assert(1 == calculate_nth_triangular_number(1));
    assert(3 == calculate_nth_triangular_number(2));
    assert(10 == calculate_nth_triangular_number(4));
    assert(15 == calculate_nth_triangular_number(5));
    assert(21 == calculate_nth_triangular_number(6));
    assert(28 == calculate_nth_triangular_number(7));
    assert(36 == calculate_nth_triangular_number(8));
    assert(45 == calculate_nth_triangular_number(9));
    assert(55 == calculate_nth_triangular_number(10));
    assert(66 == calculate_nth_triangular_number(11));
    assert(78 == calculate_nth_triangular_number(12));
    assert(91 == calculate_nth_triangular_number(13));
    assert(105 == calculate_nth_triangular_number(14));
    assert(120 == calculate_nth_triangular_number(15));
    assert(136 == calculate_nth_triangular_number(16));
    assert(153 == calculate_nth_triangular_number(17));
    assert(171 == calculate_nth_triangular_number(18));
    assert(190 == calculate_nth_triangular_number(19));
    assert(210 == calculate_nth_triangular_number(20));

    return 0;
}
