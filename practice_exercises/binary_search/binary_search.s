.text


.global binary_search


# 
# Implementation of a binary search method.
# Arguments:
#  · a0: address of the first element of the array.
#  · a1: length of the array.
#  · a2: element to look for.
#  · a3: address where the index of the selected element will be stored. If
#        the element isn't in the array, a -1 will be stored in that address.
# 
binary_search:

    # Store the index 0 in t0 and the last index of the array in t1.
    add t0, zero, zero
    addi t1, a1, -1

    main_loop:
        # Store in t2 the index in the middle of the window delimited by the indexes
        # stored in t0 and t1.
        add t2, t0, t1
        srai t2, t2, 1

        # Calculate the addresses corresponding to the indexes in t0, t1 and t2.
        slli t3, t0, 2
        add t3, a0, t3
        
        slli t4, t1, 2
        add t4, a0, t4

        slli t5, t2, 2
        add t5, a0, t5

        # Load the actual array elements located at the addresses stored in t0, t1 and t2.
        lw t3, 0(t3)
        lw t4, 0(t4)
        lw t5, 0(t5)

        # Binary search logic.
        bge t0, t1, end_algorithm
        bgt a2, t5, go_upper_window
        blt a2, t5, go_lower_window
        beq a2, t5, found_element

    # Reduce the search window to the upper section of the current window and continue
    # iterating.
    go_upper_window:
        addi t0, t2, 1
        j main_loop
    
    # Reduce the search window to the lower section of the current window and continue
    # iterating.
    go_lower_window:
        addi t1, t2, -1
        j main_loop

    # End the algorithm checking if the element is found in the array.
    end_algorithm:
        bne a2, t3, store_neg_one

    # Store the index that the element occupies inside the array in the address saved
    # in the a3 register.
    found_element:
        sw t2, 0(a3)
        ret

    # If the element isn't in the array, store a -1 in the result address.
    store_neg_one:
        addi t1, zero, -1
        sw t1, 0(a3)
        ret
