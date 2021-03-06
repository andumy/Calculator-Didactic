; descending memory locations starting from ffff contain -1, -2, -3, -4, -5, -6, -7, -8
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

push    [XA + 0]                        ; 0000 010 0 10 000 100     2120 0000
pop     [BB + 0]                        ; 0000 011 0 10 000 111     e160 0000
push    [XB + 0]                        ; 0000 010 0 10 000 101     a120 0000
push    [BA + 0]                        ; 0000 010 0 10 000 110     6120 0000
pop     [BB + XA + 0]                   ; 0000 011 0 10 000 010     4160 0000
pop     [BB + XB + 0]                   ; 0000 011 0 10 000 011     c160 0000
push    [BA + XA + 0]                   ; 0000 010 0 10 000 000     0120 0000
pop     [BA + XB + 0]                   ; 0000 011 0 10 000 001     8160 0000

push    [BA + 2]                        ; 0000 010 0 10 000 110     6120 0002
pop     [XB - 7]                        ; 0000 011 0 10 000 101     a160 fff9
push    [BB + 4]                        ; 0000 010 0 10 000 111     e120 0004
push    [XA - 2]                        ; 0000 010 0 10 000 100     2120 fffe
pop     [BA + XB - 5]                   ; 0000 011 0 10 000 001     8160 fffb
pop     [BA + XA - 7]                   ; 0000 011 0 10 000 000     0160 fff9
push    [BB + XB + 4]                   ; 0000 010 0 10 000 011     c120 0004
pop     [BB + XA - 5]                   ; 0000 011 0 10 000 010     4160 fffb
