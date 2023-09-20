#include "stdio.h"

char Operator;

typedef unsigned char byte;


int Count(int a)
{
	return a + 1;
}

//memcopy

int main()
{
	int a = Count(2);	//8 bytes
	//Pointer pointing on a int
	int* p_a;			//8 bytes

	//p_a = (int*)10;		reads from a segment 10 from registry
	p_a = &a;				//we don´t care about a but we want the address it lays on

	char b;				//1 byte
	char* p_b;			//8 bytes

	b = 10;

	int c = 257;

	byte * p_c;

	p_c = (byte*)&c;		//explicitní přetypování

	//printf("%i", sizeof(__int64))
	//printf("%i", sizeof(byte))		//will show 1


	for (int i = 0; i < sizeof(int); i++)
	{
		printf("%i ", *p_c);
		p_c++;			//increment pointer address		!doesn´t mean add one!		!adds some bytes(8;4...)!
		//(*p_c)++;			--> adds one to value stored		1 2 3 4
	}

	printf("\n\nhello world %i \n", a);
	printf("%p %i \n", p_a, p_a);
	printf("%i \n", &p_a);			//Where does p_a lay?
	printf("%i \n", *p_a);			//Dereference	//writes out p_a not the a alone (p_a = a)

	return 0;
}








// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
