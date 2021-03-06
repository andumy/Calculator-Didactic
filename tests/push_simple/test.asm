; descending memory locations starting from ffff contain -1, -2, -3, -4, -5
xor     RA,             RA              ; 0101 110 0 11 000 000     033a
xor     RB,             RB              ; 0101 110 0 11 001 001     933a
xor     RC,             RC              ; 0101 110 0 11 010 010     4b3a
xor     IS,             IS              ; 0101 110 0 11 011 011     db3a
xor     XA,             XA              ; 0101 110 0 11 100 100     273a
xor     XB,             XB              ; 0101 110 0 11 101 101     b73a
xor     BA,             BA              ; 0101 110 0 11 110 110     6f3a
xor     BB,             BB              ; 0101 110 0 11 111 111     ff3a
dec     XA                              ; 0001 001 0 11 000 100     2348
dec     XB                              ; 0001 001 0 11 000 101     a348
dec     XB                              ; 0001 001 0 11 000 101     a348
add     BA,             XA              ; 0101 000 0 11 100 110     670a
add     BA,             XB              ; 0101 000 0 11 101 110     770a
add     BB,             BA              ; 0101 000 0 11 110 111     ef0a
add     BB,             BA              ; 0101 000 0 11 110 111     ef0a

push    XA                              ; 0000 010 0 11 000 100     2320
pop     RA                              ; 0000 011 0 11 000 000     0360
push    XB                              ; 0000 010 0 11 000 101     a320
push    BA                              ; 0000 010 0 11 000 110     6320
pop     RC                              ; 0000 011 0 11 000 010     4360
push    BB                              ; 0000 010 0 11 000 111     e320
pop     RB                              ; 0000 011 0 11 000 001     8360
pop     RB                              ; 0000 011 0 11 000 001     8360

push    [XA]                            ; 0000 010 0 00 000 100     2020
pop     [BB]                            ; 0000 011 0 00 000 111     e060
push    [XB]                            ; 0000 010 0 00 000 101     a020
push    [BA]                            ; 0000 010 0 00 000 110     6020
pop     [BB + XA]                       ; 0000 011 0 00 000 010     4060
pop     [BB + XB]                       ; 0000 011 0 00 000 011     c060
push    [BA + XA]                       ; 0000 010 0 00 000 000     0020
pop     [BA + XB]                       ; 0000 011 0 00 000 001     8060
