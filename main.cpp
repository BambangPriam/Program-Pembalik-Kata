#include<stdio.h>
#include<string.h>
#include<ctype.h>

char a[100];
int b,c;
int main()

{   printf("PROGRAM PEMBALIK KATA \n");
    printf ("Masukkan kata : ") ;
    gets (a);
    strrev(a);
    printf("Kebalikan katanya adalah : %s", a);
}
