#include "assert.h"


extern void reverse_array(int* array, int length);


int main() {

    // First test case.
    int base_array_1[8] = {0, -12311, 37, -71, -83, 3, 1, 9018826};
    int modified_array_1[8] = {0, -12311, 37, -71, -83, 3, 1, 9018826};
    reverse_array(modified_array_1, 8);
    for (int i = 0; i < 8; i++) {
        assert(modified_array_1[i] == base_array_1[7 - i]);
    }

    // Second test case.
    int base_array_2[1] = {61};
    int modified_array_2[1] = {61};
    reverse_array(modified_array_2, 1);
    for (int i = 0; i < 1; i++) {
        assert(modified_array_2[i] == base_array_2[0 - i]);
    }
    
    // Third test case.
    int base_array_3[5] = {61001662, -26, -991283, 41, 5};
    int modified_array_3[5] = {61001662, -26, -991283, 41, 5};
    reverse_array(modified_array_3, 5);
    for (int i = 0; i < 5; i++) {
        assert(modified_array_3[i] == base_array_3[4 - i]);
    }
    assert(modified_array_3[0] == 5);

    return 0;
}
