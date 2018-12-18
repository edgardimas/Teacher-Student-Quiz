void insert(int score,char name[20], int snumber){
	p*link = (p*)malloc(sizeof(p));
	strcpy(link->name,name);
	link->npm = snumber;
	link->score = score;
	link->next = head;
	head = link;
}

void printList(){
	p *ptr = head;
	printf("\n\n");
	while (ptr!=NULL){
	
		printf("Nama: %s |",ptr->name);
		printf("S. Number: %d |",ptr->npm);
		printf("score %d |",ptr->score);
		printf("\n");
		ptr = ptr->next;
	}
	
}


