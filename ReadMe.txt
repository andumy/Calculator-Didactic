Readme Tema 3 AC 
Calculatorul didactic

Functionalitati adaugate:

- Modul de adresare 10
	
	Au fost adaugate 2 stari noi care incrementeaza cp-ul pentru a accesa adresa din memorie
	la care se afla deplasamentul, `load_depls,`load_depls+1 care in esenta sunt un inc_cp
	si 4 stari in care se aduna deplasamentul la adresa deja existenta( fie din registru sau
	suma de registrii). Mai departe programul continua aceleasi stari pe care le-ar fi parcurs
	in modul de adresare 00 incepand cu incarcarea src.

- Modul de adresare 00
	
	Modul de adresare 00 se comporta la fel ca modul de adresare 10 cu exceptia faptului ca 
	inainte de calculul adresei efefctive, se adauga deplasamentul la valoarea stocata pana
	atunci, iar mai departe se continua ca la modul de adresare 10;
	
	Starile au urmatorul parcurs:

	load_depls(stari care incrementeaza cp-ul, echivalenta cu inc_cp)

	   |
	   V
	
	addr_reg/addr_sum (stare in care se stocheaza pe t1 adresa salvata in registru)

	   |
	   V
		
	add_depls (stare in care se citeste din ram valoarea deplasamentului aflata la adresa
		   cp+1 calculata la starea load_depls si se salveaza pe t2. Apoi se aduna 
	           la adresa din t1 si se salveaza rezultatul in t1)

	   |
	   V
	
	decode_src, iar de aici starile evolueaza precum in modul de adresare 10    
	

- MOV

	in starea decode am ramificat instructiunile cu 1 singur operand in 3 parti:
	Dupa cop[3] in operatii de
		-transfer de date
			dupa cop[5] in:
			- push/pop
			- mov/jump
		-operatii  
	
	In plus in starea de exec_1op, am facut o ramificare dupa cop[3], iar in sectiunea transfer de date am facut un OR pe
	registrul T2. Practic transfer valoarea stocata in t2 , pe t1 ca mai apoi sa fie salvata in starile de store. 
	Este necesara transferarea datelor din t2 in t1 deoarece valoarea "sursei" care trebuie salvata este incarcata de 
	starile load_src_reg / load_src_mem in t2, in vreme ce starile de store, salveaza valorile salvate in t1. 


-RI[2] = 1 sau adresare imediata
	

	

Git: https://github.com/andumy/Calculator-Didactic
==========================================================================================
Andrei Dumitrescu 333 AC