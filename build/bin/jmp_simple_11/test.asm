xor     RA,             RA              ; 0101 110 0 11 000 000     033a
xor     RB,             RB              ; 0101 110 0 11 001 001     933a
xor     RC,             RC              ; 0101 110 0 11 010 010     4b3a
xor     IS,             IS              ; 0101 110 0 11 011 011     db3a
xor     XA,             XA              ; 0101 110 0 11 100 100     273a
xor     XB,             XB              ; 0101 110 0 11 101 101     b73a
xor     BA,             BA              ; 0101 110 0 11 110 110     6f3a
xor     BB,             BB              ; 0101 110 0 11 111 111     ff3a
inc     RA                              ; 0001 000 0 11 000 000     0308
inc     RB                              ; 0001 000 0 11 000 001     8308
inc     RB                              ; 0001 000 0 11 000 001     8308
inc     RB                              ; 0001 000 0 11 000 001     8308
inc     RC                              ; 0001 000 0 11 000 010     4308
shl     RC                              ; 0001 100 0 11 000 010     4318
shl     RC                              ; 0001 100 0 11 000 010     4318
inc     IS                              ; 0001 000 0 11 000 011     c308
inc     IS                              ; 0001 000 0 11 000 011     c308
add     XA,             RB              ; 0101 000 0 11 001 100     330a
add     XA,             RC              ; 0101 000 0 11 010 100     2b0a
add     XB,             XA              ; 0101 000 0 11 100 101     a70a
dec     XB                              ; 0001 001 0 11 000 101     a348
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             RA              ; 0101 000 0 11 000 110     630a
add     BB,             RA              ; 0101 000 0 11 000 111     e30a
add     BB,             RC              ; 0101 000 0 11 010 111     eb0a
add     RA,             BA              ; 0101 000 0 11 110 000     0f0a
add     RB,             BA              ; 0101 000 0 11 110 001     8f0a
add     RC,             BA              ; 0101 000 0 11 110 010     4f0a
add     IS,             BA              ; 0101 000 0 11 110 011     cf0a
add     XA,             BA              ; 0101 000 0 11 110 100     2f0a
add     XB,             BA              ; 0101 000 0 11 110 101     af0a
add     BB,             BA              ; 0101 000 0 11 110 111     ef0a

jmp     RA                              ; 0000 101 0 11 000 000     0350
jmp     RB                              ; 0000 101 0 11 000 001     8350
jmp     RC                              ; 0000 101 0 11 000 010     4350
jmp     IS                              ; 0000 101 0 11 000 011     c350

jmp     XA                              ; 0000 101 0 11 000 100     2350
jmp     XB                              ; 0000 101 0 11 000 101     a350
jmp     BA                              ; 0000 101 0 11 000 110     6350
jmp     BB                              ; 0000 101 0 11 000 111     e350
