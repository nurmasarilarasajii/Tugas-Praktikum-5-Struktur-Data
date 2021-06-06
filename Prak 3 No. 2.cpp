/* Nama 	: Nurma Sari Laras Aji */
/* NIM 		: 20051397062 */
/* Kelas 	: MI 2020B */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

struct parkir{
	char plat[15];
	char merk[10];
	char pemilik[20];
	struct parkir *back;
	struct parkir *next;
}p;

struct parkir *head,*tail;

int input_data(){
	struct parkir *tampung,*awal;
	int j=0;char jawab[2];
	while(1);
	  awal=(struct parkir*)malloc(sizeof(struct parkir));
	  fflush(stdin);
	  puts("Input Data Kendaraan Masuk :  ");
	  printf("Masukkan Plat Nomor Kendaraan : ");gets(awal->plat);
	  printf("Masukkan Merk Kendaraan       : ");gets(awal->merk);
	  printf("Masukkan Nama Pemilik         : ");gets(awal->pemilik);
	  puts("");
	  if(j==0){
	  	awal->next=NULL;
	  	awal->back=NULL;
	  	head=awal;
	  	tail=awal;
	  	tampung=awal;
	  }else{
	  	awal->next=NULL;
	  	tampung->next=awal;
	  	awal->back=tampung;
	  	tail=awal;
	  	tampung=awal;
	  }
	  printf("Ada data lagi (y/t)           : ");scanf("%s",&jawab);
	  if((strcmp(jawab,"Y")==0) || (strcmp(jawab,"y")==0)){
	  }else if
	  	((strcmp(jawab,"Y")==0) || (strcmp(jawab,"y")==0));
	  }
	
	


int tampil() {
	struct parkir *tampil;
	tampil=head;
	while(tampil!=NULL){
		printf("%s\t%s\t\t%s\n",tampil->plat,tampil->merk,tampil->pemilik);
		tampil=tampil->next;
	}
}

int hapus() {
	struct parkir *hapus,*sbl,*stl;
	char cari[20];
	if(head==NULL)
	  puts("List belum ada. Silahkan buat data!");
	else{
		fflush(stdin);
		printf("Data yang akan dihapus?  (plat nomor) : ");gets(cari);
		hapus=head;
		if(strcmp(hapus->plat,cari)==0) {
			if(hapus==head) {
				head=head->next;
				head->back=NULL;
				free(hapus);
			}
			else{
			  do{
			  	sbl=hapus;
			  	hapus=hapus->next;
			  }while(strcmp(hapus->plat,cari)==0);
			  if(hapus->next==NULL) {
			  	sbl->next=NULL;
			  	tail=sbl;
			  	free(hapus);
			  }else{
			  	stl=hapus->next;
			  	sbl->next=stl;
			  	stl->back=sbl;
			  	free(hapus);
			  }
			}
			}
		}
		}


int main() {
	input_data();
	tampil();
	hapus();
	tampil();
	getch();
	return 0;
}
