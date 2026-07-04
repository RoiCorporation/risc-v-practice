.text


.global calculate_nth_triangular_number


# Recursive implementation of a function that calculates the n-th triangular
# number according to this definition.
# · S0 = 0
# · S1 = 1
# · S2 = 3
# · For n ≥ 3: Sn = 3 * Sn-1 - 3 * Sn-2 + Sn-3
calculate_nth_triangular_number:
    
    # Check if the function's argument is one of the base cases.
    beq a0, zero, treat_base_case_0
    addi t0, zero, 1
    beq a0, t0, treat_base_case_1
    addi t0, zero, 2
    beq a0, t0, treat_base_case_2

    # Calculate Sn-1 recursively and handle the stack pointer (SP), return
    # address (RA) and a0 registers value appropriately. The result is stored
    # in a0.
    addi sp, sp, -40
    sd a0, 0(sp)
    sd ra, 8(sp)
    sd t4, 16(sp)
    sd t5, 24(sp)
    sd t6, 32(sp)
    addi a0, a0, -1
    jal ra, calculate_nth_triangular_number
    add t1, zero, a0
    ld a0, 0(sp)
    ld ra, 8(sp)
    ld t4, 16(sp)
    ld t5, 24(sp)
    ld t6, 32(sp)
    addi sp, sp, 40

    # Calculate (3 * Sn-1) and store the result in t4.
    addi t0, zero, 3
    mul t4, t0, t1

    # Calculate Sn-2 recursively and handle the stack pointer (SP), return
    # address (RA) and a0 registers value appropriately. The result is stored
    # in a0.
    addi sp, sp, -40
    sd a0, 0(sp)
    sd ra, 8(sp)
    sd t4, 16(sp)
    sd t5, 24(sp)
    sd t6, 32(sp)
    addi a0, a0, -2
    jal ra, calculate_nth_triangular_number
    add t1, zero, a0
    ld a0, 0(sp)
    ld ra, 8(sp)
    ld t4, 16(sp)
    ld t5, 24(sp)
    ld t6, 32(sp)
    addi sp, sp, 40

    # Calculate (-3 * Sn-1) and store the result in t5.
    addi t0, zero, -3
    mul t5, t0, t1

    # Calculate Sn-3 recursively and handle the stack pointer (SP), return
    # address (RA) and a0 registers value appropriately. The result is stored
    # in a0.
    addi sp, sp, -40
    sd a0, 0(sp)
    sd ra, 8(sp)
    sd t4, 16(sp)
    sd t5, 24(sp)
    sd t6, 32(sp)
    addi a0, a0, -3
    jal ra, calculate_nth_triangular_number
    add t1, zero, a0
    ld a0, 0(sp)
    ld ra, 8(sp)
    ld t4, 16(sp)
    ld t5, 24(sp)
    ld t6, 32(sp)
    addi sp, sp, 40

    # Store Sn-3 in t6.
    add t6, t1, zero

    # Calculate Sn by adding the equation terms stored in t4, t5 and t6.
    # Then, store the result in a0 and return.
    add t0, t4, t5
    add a0, t0, t6
    
    # Return
    jalr zero, 0(ra)


# Return 0 if the argument is 0 (first base case).
treat_base_case_0:
    addi a0, zero, 0
    jalr zero, 0(ra)

# Return 1 if the argument is 1 (second base case).
treat_base_case_1:
    addi a0, zero, 1
    jalr zero, 0(ra)

# Return 3 if the argument is 2 (third base case).
treat_base_case_2:
    addi a0, zero, 3
    jalr zero, 0(ra)
