#define LEN sizeof(struct Student)
struct Student
{
	long num;
	float score;
	struct Student* next;
};
int n;
struct Student* creat(void)
{
	struct Student* head;
	struct Student* p1, * p2;
	n = 0;
	p1 = p2 = (struct Student*)malloc(LEN);
	scanf_s("%ld,%f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)head = p1;//如果n=1 则p1此时是第一个节点 另头结点=p1
		else p2->next = p1;//如果n!=1则p1此时是第n个学生的节点 
		p2 = p1;
		p1 = (struct Student*)malloc(LEN);
		scanf_s("%ld,%f", &p1->num, &p1->score);
	 }
	p2->next = NULL;
	return(head);
}