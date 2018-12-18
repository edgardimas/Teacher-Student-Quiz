void printArray( const int a[][ 3 ] )
 {
 int i; /* row counter */
 int j; /* column counter */

 /* loop through rows */
 for ( i = 0; i <= 2; i++ ) {

 /* output column values */
 for ( j = 0; j <= 2; j++ ) {
 printf( "%d ", a[ i ][ j ] );
 } /* end inner for */
 printf( "\n" );
  /* start new line of output */
  } 


 }  
void printArray1(const int a[]){
	int i;
	
	for (i=0;i<=5;i++){
		printf(" %d ",a[i]);
	}
}
void functionMAX(int a[],int b[]){
	int max[25];
	int maximum;
	
	int p,q;
	int i =0;
	for(p=0;p<=4;p++){
	for (q=0;q<=4;q++){
	
		max[i]= 2*a[p]*a[p]+3*b[q]*b[q]-(a[p]*b[q]*a[p]*b[q]);                                                                               
		
		printf("nilai fungsi pada saat x = %d dan y = %d adalah: %d\n",p+1,q+1,max[i]);
		i++;
	
	}
	int maximum;
	maximum = max[0];
	}
	for(i=0;i<=24;i++){
		
		if (max[i]>maximum){
			maximum = max[i];
		}
		
	}
	
	printf("\n\nnilai maximum nya adalah %d\n\n",maximum);
	
}
void tambah2(int b){
	b = b+2;
	return b;
	
}
void Exit()
{
	system("cls");
	printf("\n\nThank You!\n\n\n");
	system("pause");
	exit(EXIT_SUCCESS);
}

