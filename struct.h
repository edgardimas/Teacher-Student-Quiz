struct player{
	char name[20];
	int score;
	int npm;
	struct player *next;
};


typedef struct player p;
p *head = NULL;
p *current = NULL;
