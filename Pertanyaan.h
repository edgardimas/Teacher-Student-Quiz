void Pertanyaan1(){
	printf("Pertanyaan 1: \n\n");
	IMG("limas");
	printf("\n\n");
	printf("Gambar apakah ini?");
	printf("\n[1]Limas Segi lima\n[2] Jajargenjang\n[3] Kuda \n");
	printf("\n\n");

}
void Pertanyaan2(){
printf("Pertanyaan 2: \n");
void printArray( const int a[][ 3 ] );
int i,j,a,b,d,s;
int p=0;
int r[3][3];

	int array[3][3]={1,2,3,1,2,3,1,2,3};
	int transpose[3][3];
	printf("Diberikan Matrix berikut: \n");
	printf("\n");
	printArray(array);
	printf("Matrix tersebut akan di transpose, berapakah nilai- nilai matris tersebut?\n\n");
	 for(i=0; i<3; ++i){
	 
        for(j=0; j<3; ++j)
        {
            transpose[j][i] = array[i][j];
        }
    }
    	printf("\n[1] [1 1 1;2 2 2;3 3 3] \n[2] [1 2 3;1 2 3;1 2 3] \n[3] [3 2 1;3 2 1;3 2 1]");
    	 
    
    	printf("\n\n");
    
		
}
void Pertanyaan3(){	
	int i;
	int p=0;
	printf("pertanyaan 3\n\n");
	printf("diberikan array berikut: \n\n");
	int array2[]={1,4,5,6,7,8};
	printArray1(array2);
	printf("\n\nMatrix tersebut akan dimasukan ke dalam fungsi y = 3x + 2 dimana x merupakan input Array tersebut\n");
	int array3[6];
	for(i=0;i<=5;i++){
		array3[i]=3*array2[i]+2;
	}
	printf("Berapakah angka-angka tersebut? ");
	printf("\n[1]8 10 19 20 30 32 \n[2] 5 14 17 20 23 26 \n[3] 5 14 19 20 23 26");
	
	
    
}
void Pertanyaan4(){
	int answer;
	printf("pertanyaan 4: \n\n");
	IMG("iqtest");
	printf("\n\nBerapakah nilai x? ");
		
}
void Pertanyaan5(){
	printf("Pertanyaan 5: \n\n");
	printf("Diberikan Segitiga sama sisi. Apabila panjang sisi adalah 10cm berapakah nilai luas?\n");
	printf("[1]43.3 \n[2]52 \n[3]60");
	
	
	
	
	

	
}

void Pertanyaan6(){
	printf("\n\nPertanyaan 6\n\n");
	printf("di berikan beberapa angka dibawah ini");
	int i;
	int azz[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		printf(" %d ",azz[i]);
	}
	printf("angka ke-tiga akan saya tambahkan 2, berapa hasilnya?\n");

}
void Pertanyaan7(){
	printf("\n\nPertanyaan 7\n\n");
	printf("Jika di seuah kotak terdapat 60 kelereng yang bewarna merah, biru, dan kuning. 1/4 \n");
	printf("diantaranya merupakan  kelereng merah dan 1/4 nya lagi merupakan kelereng biru \n");
	printf("berapa banyaknya kelereng kuning? ");

}
void Pertanyaan8(){
		int answer;
	printf("\n\nPertanyaan 8\n\n");
	printf("Berapa banyak jumblah sisi pada prisma segi 6?");
	printf("jawaban anda: ");

}
void Pertanyaan9(){
	printf("\n\nPertanyaan 9\n\n");
	printf("diberikan number sequence sebagai berikut: \n");
	printf("1,1,2,4,3,9,4, x\n");
	printf("berapakah nilai x ");


}
void Pertanyaan10(){
	printf("\n\nPertanyaan 10\n\n");
	printf("nilai dari cos(90) adalah: ");
	

	
} 
