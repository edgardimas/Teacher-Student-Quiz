/* 
No. Kelompok: 1
Judul: Teacher-Student Quiz Program
Program Teacher 
 by : Edgar Dimas Isaadrazak(1606908520)
	  Refanka Nabil Assalam(1606870944)		
Link github: https://github.com/edgardimas/Teacher-Student-Quiz/blob/master/Teacher%20program 
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch, fname[20];
	int choice;
	FILE *fps, *fpt;
	printf("===============================================\n\n\t\tWelcome, Teacher!\n\n");
	printf("===============================================\n");
	printf("\tAplikasi Dekripsi Jawaban Pelajar\n\n");
	printf("1. Andrew\n2. Edgar\n3. Refan\n\n");
	printf("Choose file name to decrypt : ");
	scanf("%d",&choice);
	
	switch(choice) {
      case 1 :
         fps=fopen("encryptAndrew.txt", "r");
		 fpt=fopen("jawabanAndrew.txt", "w");
	
		while(1)
		{
		ch=fgetc(fps);
		if(ch==EOF)
		{
			break;
		}
		else if(ch==','||ch=='1'||ch=='2'||ch=='3')
		{
			ch=ch;
			fputc(ch, fpt);
		}
		else{
    	int c = ch;
		c=c+16;
        fputc(c, fpt);
			}
		}	
         break;
         
    case 2 :
    fps=fopen("encryptEdgar.txt", "r");
	fpt=fopen("jawabanEdgar.txt", "w");

	while(1)
	{
	ch=fgetc(fps);
	if(ch==EOF)
	{
		break;
	}
	else if(ch==','||ch=='1'||ch=='2'||ch=='3')
	{
		ch=ch;
		fputc(ch, fpt);
	}
	else{
	int c = ch;
	c=c+16; //+16 didapatkan dari tabel ASCII untuk merubah menjadi angka
    fputc(c, fpt);
		}
	}	
     break;
         
      default :
         printf("Invalid grade\n" );
   
   case 3 :
    fps=fopen("encryptRefan.txt", "r");
	fpt=fopen("jawabanRefan.txt", "w");

	while(1)
	{
	ch=fgetc(fps);
	if(ch==EOF)
	{
		break;
	}
	else if(ch==','||ch=='1'||ch=='2'||ch=='3')
	{
		ch=ch;
		fputc(ch, fpt);
	}
	else{
	int c = ch;
	c=c+16;
    fputc(c, fpt);
		}
	}	
     break;
   }
   
	printf("File %d decrypted successfully..!!",choice);
	printf("\nPress any key to exit...");
	fclose(fps);
	fclose(fpt);
	getch();
}
