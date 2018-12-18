void Search(p **head_ref,int key){
	p *temp = *head_ref, *prev;
	if ((temp != NULL) && (temp -> npm == key)){
		printf("Nama yang memiliki NPM tersebut adalah: %s",temp->name);
		printf("\n\ndengan nilai: %d", temp->score);
		printf("\n\n");
		
		return;
	}
	
	while ((temp != NULL) && (temp -> npm != key)){
		prev = temp;
		temp = temp->next;
	}
	
	if(temp == NULL) {
		printf("Maaf, NPM tidak ditemukan");
		printf("\n\n");
	
		return;
 	}
		printf("Nama yang memiliki NPM tersebut adalah: %s",temp->name);
		printf("\n\ndengan nilai: %d ", temp->score);
		printf("\n\n");
	
	
			
}
