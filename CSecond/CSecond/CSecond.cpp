// CSecond.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <stdio.h>

typedef unsigned char byte;
#define kkk 10              //directive of decompiler
#define MY_CONSTANT_LMAOOOOO 5

void Copy(byte* source, byte* dest, int bytes) 
{
    for (int i = 0;i < bytes;i++) 
    {
        *dest = *source;
        source++;
        dest++;
    }
}


int main()
{
    int a, b;

    a = kkk;
    b = 20;

    Copy((byte*)&b, (byte*)&a, sizeof(int));

    printf("%i,%i", a, b);
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
