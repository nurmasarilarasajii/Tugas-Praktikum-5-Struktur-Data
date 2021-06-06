/* Nama 	: Nurma Sari Laras Aji */
/* NIM 		: 20051397062 */
/* Kelas 	: MI 2020B */


#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
void Tukar (int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void BubbleSort(){
int i, j,c=0;
for(i=1; i<MAX-1; i++){
for(j=MAX-1; j>=i; j--){
if(Data[j-1] > Data[j]){
c++;
Tukar(&Data[j-1], &Data[j]);
}
}
printf("\nliterasi %d : ",i);
for(int x=0; x<MAX; x++){
printf("%d ", Data[x]);
}
}
printf("\nBanyak pertukaran : %d\n",c);
}
int main(){
int i;
srand(0);
printf("DATA SEBELUM TERURUT\n");
for(i=0; i<MAX; i++){
Data[i] = (int) rand()/1000+1;
printf("%d ", Data[i]);
}
printf("\n\nLiterasi Pengurutan");
BubbleSort();
printf("\nDATA SETELAH TERURUT\n");
for(i=0; i<MAX; i++){
printf("%d ",Data[i]);
}
}
