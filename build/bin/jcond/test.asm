xor     RA,             RA              ; 0101 110 0 11 000 000     033a
xor     RB,             RB              ; 0101 110 0 11 001 001     933a
xor     RC,             RC              ; 0101 110 0 11 010 010     4b3a
xor     IS,             IS              ; 0101 110 0 11 011 011     db3a
xor     XA,             XA              ; 0101 110 0 11 100 100     273a
xor     XB,             XB              ; 0101 110 0 11 101 101     b73a
xor     BA,             BA              ; 0101 110 0 11 110 110     6f3a
xor     BB,             BB              ; 0101 110 0 11 111 111     ff3a
inc     RA                              ; 0001 000 0 11 000 000     0308
shl     RA                              ; 0001 100 0 11 000 000     0318
inc     RA                              ; 0001 000 0 11 000 000     0308
inc     RB                              ; 0001 000 0 11 000 001     8308
inc     RB                              ; 0001 000 0 11 000 001     8308
inc     RC                              ; 0001 000 0 11 000 010     4308
dec     XA                              ; 0001 001 0 11 000 100     2348
dec     XB                              ; 0001 001 0 11 000 101     a348
dec     XB                              ; 0001 001 0 11 000 101     a348
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XB              ; 0101 000 0 11 101 110     770a
add     BB,             BA              ; 0101 000 0 11 110 111     ef0a
add     BB,             BA              ; 0101 000 0 11 110 111     ef0a
shr     XA                              ; 0001 101 0 11 000 100     2358

cmp     RC,             RC              ; 0100 010 0 11 010 010     4b22
ja      +2                              ; 1001 1000 00000010        4019
jbe     +2                              ; 1001 0000 00000010        4009
halt                                    ; 1000 1100 00 000 000      0031

cmp     RC,             RB              ; 0100 010 0 11 001 010     5322
jae     +2                              ; 1001 1001 00000010        4099
jb      +2                              ; 1001 0001 00000010        4089
halt                                    ; 1000 1100 00 000 000      0031

cmp     BA,             BA              ; 0100 010 0 11 110 110     6f22
jg      +2                              ; 1001 1010 00000010        4059
jle     +2                              ; 1001 0010 00000010        4049
halt                                    ; 1000 1100 00 000 000      0031

cmp     BA,             XB              ; 0100 010 0 11 101 110     7722
jge     +2                              ; 1001 1011 00000010        40d9
jl      +2                              ; 1001 0011 00000010        40c9
halt                                    ; 1000 1100 00 000 000      0031

cmp     RC,             RC              ; 0100 010 0 11 010 010     4b22
jne     +2                              ; 1001 1100 00000010        4039
je      +2                              ; 1001 0100 00000010        4029
halt                                    ; 1000 1100 00 000 000      0031

add     XA,             XA              ; 0101 000 0 11 100 100     270a
jno     +2                              ; 1001 1101 00000010        40b9
jo      +2                              ; 1001 0101 00000010        40a9
halt                                    ; 1000 1100 00 000 000      0031

test    XB,             XB              ; 0100 100 0 11 101 101     b712
jns     +2                              ; 1001 1110 00000010        4079
js      +2                              ; 1001 0110 00000010        4069
halt                                    ; 1000 1100 00 000 000      0031

test    RA,             RA              ; 0100 100 0 11 000 000     0312
jpo     +2                              ; 1001 1111 00000010        40f9
jpe     +2                              ; 1001 0111 00000010        40e9
halt                                    ; 1000 1100 00 000 000      0031

cmp     RB,             RC              ; 0100 010 0 11 010 001     8b22
jbe     +2                              ; 1001 0000 00000010        4009
ja      +2                              ; 1001 1000 00000010        4019
halt                                    ; 1000 1100 00 000 000      0031

cmp     RC,             RC              ; 0100 010 0 11 010 010     4b22
jb      +2                              ; 1001 0001 00000010        4089
jae     +2                              ; 1001 1001 00000010        4099
halt                                    ; 1000 1100 00 000 000      0031

cmp     XB,             BA              ; 0100 010 0 11 110 101     af22
jle     +2                              ; 1001 0010 00000010        4049
jg      +2                              ; 1001 1010 00000010        4059
halt                                    ; 1000 1100 00 000 000      0031

cmp     BA,             BA              ; 0100 010 0 11 110 110     6f22
jl      +2                              ; 1001 0011 00000010        40c9
jge     +2                              ; 1001 1011 00000010        40d9
halt                                    ; 1000 1100 00 000 000      0031

cmp     RC,             RB              ; 0100 010 0 11 001 010     5322
je      +2                              ; 1001 0100 00000010        4029
jne     +2                              ; 1001 1100 00000010        4039
halt                                    ; 1000 1100 00 000 000      0031

add     XA,             XA              ; 0101 000 0 11 100 100     270a
jo      +2                              ; 1001 0101 00000010        40a9
jno     +2                              ; 1001 1101 00000010        40b9
halt                                    ; 1000 1100 00 000 000      0031

test    RC,             RC              ; 0100 100 0 11 010 010     4b12
js      +2                              ; 1001 0110 00000010        4069
jns     +2                              ; 1001 1110 00000010        4079
halt                                    ; 1000 1100 00 000 000      0031

test    RB,             RB              ; 0100 100 0 11 001 001     9312
jpe     +2                              ; 1001 0111 00000010        40e9
jpo     +2                              ; 1001 1111 00000010        40f9
halt                                    ; 1000 2100 00 000 000      0031
