/* Nama 	: Nurma Sari Laras Aji */
/* NIM 		: 20051397062 */
/* Kelas 	: MI 2020B */

#include <stdio.h>
#include <stdlib.h>
void urutan(int n);
int main()
{
 int n, x=0;
 printf("Input n : ");scanf("%d", &n);
 void urutan(int x, int n);
 return 0;
}
void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}
