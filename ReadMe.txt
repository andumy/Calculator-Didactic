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
		
	Pentru adresarea imediata, instructiunea va mai avea un cuvant, si anume operandul. Pentru toate modurile de adresare,
	citirea operandului imediat se va face in locul starii decode_src. Pentru modul 11 exista conditia de operand imediat
	in decodificare modului din starea decode, pentru 10 conditia se afla in starile addr_sum/addr_reg, iar pentru modul 00 
	conditia se afla in add_depls.

	Conditiile anterioare schimba flow-ul executiei din decoded_src in sterea load_instant care incrementeaza cp-ul, si 
	plaseaza pe un registru t, in functie de d, valoarea din ram aflata la adresa cp-ului incrementat. Dupa aceea flow-ul 
	revine la normal cu starea de decoded_dst. in starile de load_dst_mem/reg


-JMP

	In starea decode pe ramura care executa si mov, s-au modificat decode_src_next si store. in functie de mod se calculeaza 
	saltul care in starea de exec suprascrie valoarea din cp. Foarte important faptul ca decoded_store va fi starea fetch si
	nu se va incrementa cp-ul. Daca se incrementeaza cp-ul practic vom pierde saltul.

-PUSH
	Cum este mentionat si in curs, workflow-ul normal pentru functia PUSH este sa se decrementeze IS dupa care sa se salveze
	in ram la noua adresa IS valoarea stocata in src.

	Pentru functiile push si pop s-a facut o noua ramificare in starea decode, pe cazul cop[3] == 0 dupa cop[5]
	(separa push,pop de mov/jmp). Pentru ca este vorba doar de un sg operator, decoded_src va fi egal cu decoded_dst, pentru
 	a incarca direct valoarea din instructiune. Dupa starile de load_dst_mem/reg daca suntem intr-o instructiune de push,
	trecem in starea de push care decrementeaza IS-ul, se suprascrie IS-ul cu noua valoare, se acceseaza in ram noua adresa
	si se salveaza valoarea din t1, dupa care se incrementeaza cp-ul si se merge mai departe.

-POP 
	
	Asemanator functiei PUSH, functia pop mai intai extrage din ram valoarea aflata la adresa IS, incrementeaza valoarea din IS iar 
	la final valoarea extrasa din ram o salveaza in functie de mod in registrul sau adresa din registrul primit in instructiune.

	Pentru inceput vom decodifica locul in care trebuie salvata valoarea ce va fi extrasa din ram, in functie de mod, dupa care
	se intra in starea decode_src, adica `pop. Pentru inceput se obtine adresa salvata in IS, se trece in am, iar mai apoi in ram,
	in paralel se incrementeaza valoarea lui IS, se extrage valoarea din ram si se pune pe t2, mai departe daca modul de adresare 
	nu este 11, adica valoarea trebuie salvata in ram, se scrie pe am valoarea decodificata anterior din t1, daca nu se trece direct
	la starea pop+4, unde se transfera valoarea extrasa din memorie pe t1. De aici flow-ul revine la normal cu starea decoded_store.

-JCOND
	
	Se creeaza un nou wire(jump_val) care memoreaza cei 4 biti din ri responsabili cu decodificarea saltului. In starea de decode se ignora 
	modul de adresare si pentru fiecare mod daca se intalneste o instructiune de jcond atunci se va trece direct la starea de exec.

	in starea de exec_1op se face o noua ramificatie dupa cop[0]. Pe ramura cu jcond se ramifica din nou intr-un case dupa wire-ul	jump_val
	si pe fiecare caz se verifica daca flagurile existente indeplinesc conditia. Daca da se va trece in starea de decoded_jmp, daca nu se 
	va trece la inc_cp. 
	In starea de decoded_jmp se stocheaza pe t1 valoarea cp-ului, pe t2 valoarea saltului(ri_oe) se aduna, iar rezultatul se salveaza in cp.
	De mentionat ca la jmp, ca daca saltul se realizeaza nu se mai intra pe starea inc_cp ci direct pe starea de fetch pentru a nu pierde 
	valoarea saltului.


-POPF	
	Asemanator functiei pop, se generaza o serie de stari popf in care se extrage valoarea stocata in RAM la adresa IS, se suprascriu indicii 
	cu valoarea extrasa si se incrementeaza IS-ul

-PUSHF
	Asemanator functiei push, se genereaza o serie de stari in care se decrementeaza IS-ul si se scriu in RAM indicii scrisi pe magistrala 
	cu ind_oe = 1; Pentru eficientizare s-a folosit la comun starea push+3 in care se asteapta scrierea in RAM a valorilor.




Progresul proiectului se poate urmarii aici - Git: https://github.com/andumy/Calculator-Didactic
==========================================================================================
Andrei Dumitrescu 333 AC