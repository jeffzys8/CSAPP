func7(mem, input) {
    if (*mem > input) {
        return 2*func7(*(mem+8), input);
    }
    if (*mem == input) {
        return 0;
    }
    return 2*func7(*(mem+16), input) + 1;
}

/*
    Expect func7(mem, input) == 2
    2 = 2 * 1 = 2 * (2*0+1)
    *mem = 0x24 > input
    B = *(mem+8)
    *B = 0x08 < input
    C = (B+16)
    *C = 0x16 = input
*/