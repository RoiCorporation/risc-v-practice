#include <assert.h>


extern int binary_search(int array[], int array_length, int element_to_find, int* index);


int main() {

    int index;

    // First test case.
    int array_1[1] = {-72};
    binary_search(array_1, 1, -122, &index);
    assert(index == -1);
    binary_search(array_1, 1, -72, &index);
    assert(index == 0);
    binary_search(array_1, 1, 82663, &index);
    assert(index == -1);

    // Second test case.
    int array_2[2] = {-72, 82663};
    binary_search(array_2, 2, -122, &index);
    assert(index == -1);
    binary_search(array_2, 2, -72, &index);
    assert(index == 0);
    binary_search(array_2, 2, 82663, &index);
    assert(index == 1);
    binary_search(array_2, 2, 1001727, &index);
    assert(index == -1);
    binary_search(array_2, 2, -57, &index);
    assert(index == -1);

    // Third test case.
    int array_3[4] = {-85, -31, 1, 7};
    binary_search(array_3, 4, -90, &index);
    assert(index == -1);
    binary_search(array_3, 4, -31, &index);
    assert(index == 1);
    binary_search(array_3, 4, 1, &index);
    assert(index == 2);
    binary_search(array_3, 4, 7, &index);
    assert(index == 3);
    binary_search(array_3, 4, 7923, &index);
    assert(index == -1);
    binary_search(array_3, 4, 0, &index);
    assert(index == -1);

    // Fourth test case.
    int array_4[8] = {-850188, -7156, -640, -200, -14, -14, -7, -1};
    binary_search(array_4, 8, -900000, &index);
    assert(index == -1);
    binary_search(array_4, 8, -850188, &index);
    assert(index == 0);
    binary_search(array_4, 8, -7156, &index);
    assert(index == 1);
    binary_search(array_4, 8, -640, &index);
    assert(index == 2);
    binary_search(array_4, 8, -200, &index);
    assert(index == 3);
    binary_search(array_4, 8, -14, &index);
    assert(index == 5);
    binary_search(array_4, 8, -14, &index);
    assert(index == 5);
    binary_search(array_4, 8, -7, &index);
    assert(index == 6);
    binary_search(array_4, 8, -1, &index);
    assert(index == 7);
    binary_search(array_4, 8, 10, &index);
    assert(index == -1);
    binary_search(array_4, 8, -2, &index);
    assert(index == -1);

    // Fifth test case.
    int array_5[7] = {-121, -3, 0, 7, 15, 30, 9018826};
    binary_search(array_5, 7, -122, &index);
    assert(index == -1);
    binary_search(array_5, 7, -121, &index);
    assert(index == 0);
    binary_search(array_5, 7, 0, &index);
    assert(index == 2);
    binary_search(array_5, 7, 7, &index);
    assert(index == 3);
    binary_search(array_5, 7, 15, &index);
    assert(index == 4);
    binary_search(array_5, 7, 30, &index);
    assert(index == 5);
    binary_search(array_5, 7, 9018826, &index);
    assert(index == 6);
    binary_search(array_5, 7, 18235662, &index);
    assert(index == -1);
    binary_search(array_5, 7, 20, &index);
    assert(index == -1);

    // Sixth test case.
    int array_6[13] = {-6772, -300, -56, 2, 9, 13, 927, 2566, 2566, 9663, 20566, 60166, 73662828};
    binary_search(array_6, 13, -7000, &index);
    assert(index == -1);
    binary_search(array_6, 13, -6772, &index);
    assert(index == 0);
    binary_search(array_6, 13, -300, &index);
    assert(index == 1);
    binary_search(array_6, 13, -56, &index);
    assert(index == 2);
    binary_search(array_6, 13, 2, &index);
    assert(index == 3);
    binary_search(array_6, 13, 9, &index);
    assert(index == 4);
    binary_search(array_6, 13, 13, &index);
    assert(index == 5);
    binary_search(array_6, 13, 927, &index);
    assert(index == 6);
    binary_search(array_6, 13, 2566, &index);
    assert(index == 7);
    binary_search(array_6, 13, 9663, &index);
    assert(index == 9);
    binary_search(array_6, 13, 20566, &index);
    assert(index == 10);
    binary_search(array_6, 13, 60166, &index);
    assert(index == 11);
    binary_search(array_6, 13, 73662828, &index);
    assert(index == 12);
    binary_search(array_6, 13, 1692562926, &index);
    assert(index == -1);
    binary_search(array_6, 13, 12, &index);
    assert(index == -1);
    binary_search(array_6, 13, 2570, &index);
    assert(index == -1);

    return 0;
}
