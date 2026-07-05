#include <stdio.h>
#include <assert.h>


extern int divide(int dividend, int divisor, int *remainder);


int main() {
    int remainder;

    assert(0 == divide(0, 3, &remainder));
    assert(remainder == 0);

    assert(0 == divide(0, -510, &remainder));
    assert(remainder == 0);

    assert(4 == divide(13, 3, &remainder));
    assert(remainder == 1);

    assert(-5 == divide(-71, 15, &remainder));
    assert(remainder == 4);

    assert(4 == divide(-26, -7, &remainder));
    assert(remainder == 2);

    assert(-2134 == divide(91772, -43, &remainder));
    assert(remainder == 10);

    assert(19 == divide(816, 41, &remainder));
    assert(remainder == 37);

    assert(-3 == divide(-1927, 802, &remainder));
    assert(remainder == 479);

    assert(-48 == divide(257715, -5288, &remainder));
    assert(remainder == 3891);

    assert(109 == divide(-10023, -92, &remainder));
    assert(remainder == 5);

    return 0;
}
