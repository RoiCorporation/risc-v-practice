.text


.global reverse_array


# Reverse an array of integers whose first value is stored at the memory address
# passed in the a0 register and whose length is passed in the a1 register.
reverse_array:
    add t0, zero, a0
    
    # Calculate and store in t2 the address of the last element.
    addi t1, a1, -1
    slli t2, t1, 2
    add t2, t0, t2

    main_loop:
        # Check if the two pointers have crossed. If they have, we are done.
        ble t2, t0, end

        # Load the values at the two pointers into t3 and t4.
        lw t3, 0(t0)
        lw t4, 0(t2)

        # Swap the values in t3 and t4.
        add t5, zero, t3
        add t3, zero, t4
        add t4, zero, t5

        # Store the swapped values back into the array.
        sw t3, 0(t0)
        sw t4, 0(t2)

        # Update the pointers to point to the next elements in the array and
        # repeat the loop.
        addi t0, t0, 4
        addi t2, t2, -4
        j main_loop

    end:
        ret
