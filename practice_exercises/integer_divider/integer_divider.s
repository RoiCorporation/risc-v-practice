.text


.global divide


divide:
    add t0, a0, zero
    add t1, a1, zero
    add a0, zero, zero

    slt t2, t0, zero
    slt t3, t1, zero

    bne t2, zero, positivize_dividend

    check_divisor:
        bne t3, zero, positivize_divisor
        j divide_loop

    positivize_dividend:
        sub t0, zero, t0
        j check_divisor
    
    positivize_divisor:
        sub t1, zero, t1

    divide_loop:
        sub t0, t0, t1
        blt t0, zero, divide_loop_result
        addi a0, a0, 1
        j divide_loop

    divide_loop_result:
        bne t2, zero, increase_quotient
        bne t3, zero, invert_quotient
        j calculate_remainder

    increase_quotient:
        addi a0, a0, 1
        beq t3, zero, invert_quotient
        j calculate_remainder

    invert_quotient:
        sub a0, zero, a0

    calculate_remainder:
        bne t2, zero, calculate_negative_remainder
        add t4, t1, t0
        sw t4, 0(a2)
        ret

    calculate_negative_remainder:
        sub t4, zero, t0
        sw t4, 0(a2)
        ret
