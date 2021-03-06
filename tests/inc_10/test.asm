; descending memory locations starting from ffff contain -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12
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

inc     [XA - 0]                        ; 0001 000 0 10 000 100     2108 0000
inc     [XA - 1]                        ; 0001 000 0 10 000 100     2108 ffff
inc     [XA - 2]                        ; 0001 000 0 10 000 100     2108 fffe
inc     [XA - 3]                        ; 0001 000 0 10 000 100     2108 fffd

inc     [XA - 4]                        ; 0001 000 0 10 000 100     2108 fffc
inc     [XB - 4]                        ; 0001 000 0 10 000 101     a108 fffc
inc     [BA - 4]                        ; 0001 000 0 10 000 110     6108 fffc
inc     [BB - 4]                        ; 0001 000 0 10 000 111     e108 fffc
inc     [BA + XA - 4]                   ; 0001 000 0 10 000 000     0108 fffc
inc     [BA + XB - 4]                   ; 0001 000 0 10 000 001     8108 fffc
inc     [BB + XA - 4]                   ; 0001 000 0 10 000 010     4108 fffc
inc     [BB + XB - 4]                   ; 0001 000 0 10 000 011     c108 fffc
